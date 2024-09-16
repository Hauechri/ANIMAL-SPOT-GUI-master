import utils.PySimpleGUIQt as sg
import os
working_directory=os.getcwd()

sg.set_options(font=("Arial Bold",14))

e_src_dir_label=sg.Text("Enter Prediction directory:")
e_src_dir_input=sg.InputText(key="-e_prediction_dir-")
e_src_dir_filebrowser=sg.FolderBrowse(initial_folder=working_directory)

e_output_dir_label=sg.Text("Enter output directory:")
e_output_dir_input=sg.InputText(key="-e_output_dir-")
e_output_dir_filebrowser=sg.FolderBrowse(initial_folder=working_directory)

e_noise_in_anno_label=sg.Text("Noise in annotation:")
e_noise_in_anno_checkbox=sg.Checkbox(text="", default=False, key="-e_noise_in_anno-")

e_threshold_label=sg.Text("Enter ANIMAL-SPOT threshold:")
e_threshold_input=sg.InputText(key="-e_threshold-", default_text="0.85")
e_threshold_reset=sg.Button(button_text="default", key="e_default_threshold")

e_save_config_button=sg.FileSaveAs(button_text="save settings")
e_save_config_Input=sg.Input(key="e_save_config", enable_events=True, visible=False)
e_load_config_button=sg.FileBrowse(button_text="load settings")
e_load_config_Input=sg.Input(key="e_load_config", enable_events=True, visible=False)

e_start_prediction_button=sg.Button(button_text="Start Evaluation", key="e_start")
#e_output = sg.Output(size=(67, 10))

#sg.Print('Re-routing eval_GUI to Debug stdout', do_not_reroute_stdout=False)


eval_layout=[
    [e_src_dir_label, e_src_dir_input, e_src_dir_filebrowser],
    [e_output_dir_label, e_output_dir_input, e_output_dir_filebrowser],
    [e_noise_in_anno_label, e_noise_in_anno_checkbox],
    [e_threshold_label, e_threshold_input, e_threshold_reset],
    [e_save_config_button, e_save_config_Input],
    [e_load_config_button, e_load_config_Input],
    [e_start_prediction_button],
    #[e_output]
]
eval_column = [[sg.Column(eval_layout, scrollable=True, size=(700,700))]]
def getEvalGUI():
    return eval_column

def EvalhandleInput(event, values, window):
    if event == "e_default_threshold":
        window['-e_threshold-'].update("0.85")
        values['-e_threshold-'] = "0.85"
    if event == "e_save_config":
        generateEvalConfig(values=values)
    if event == "e_load_config":
        loadEvalConfig(values=values, window=window)
    if event == "e_start":
        startEvaluation(values=values)

def generateEvalConfig(values):
    file = open(e_save_config_Input.get(), "w")
    if values["-e_prediction_dir-"] == "":
        sg.popup_error("Prediction directory not set")
        file.close()
        return
    file.write("prediction_dir="+str(values["-e_prediction_dir-"])+"/\n")

    if values["-e_output_dir-"] == "":
        sg.popup_error("Output directory not set")
        file.close()
        return
    file.write("output_dir="+str(values["-e_output_dir-"])+"/\n")

    if values["-e_threshold-"] == "":
        sg.popup_error("Threshold not set")
        file.close()
        return
    file.write("threshold="+str(values["-e_threshold-"])+"\n")
    if values["-e_noise_in_anno-"] != "":
        file.write("noise_in_anno="+str(values["-e_noise_in_anno-"]))
    file.close()

def loadEvalConfig(values, window):
    file = open(e_load_config_Input.get())
    lines = file.readlines()
    for line in lines:
        if line.__contains__("#") or line.__contains__("*"):
            continue
        if line.__contains__("prediction_dir="):
            val = line.split("=")[1]
            val = val.split("\n")[0]
            window['-e_prediction_dir-'].update(val)
            values['-e_prediction_dir-'] = val
        if line.__contains__("output_dir="):
            val = line.split("=")[1]
            val = val.split("\n")[0]
            window['-e_output_dir-'].update(val)
            values['-e_output_dir-'] = val
        if line.__contains__("threshold="):
            val = line.split("=")[1]
            val = val.split("\n")[0]
            window['-e_threshold-'].update(val)
            values['-e_threshold-'] = val
        if line.__contains__("noise_in_anno="):
            val = line.split("=")[1]
            if val.__contains__("True") or val.__contains__("true"):
                window['-e_noise_in_anno-'].update(True)
                values['-e_noise_in_anno-'] = True
            else:
                window['-e_noise_in_anno-'].update(False)
                values['-e_noise_in_anno-'] = False
    file.close()

def startEvaluation(values):
    """eval_cmd = "python -W ignore::UserWarning"
    if values["-e_src_dir-"] == "":
        sg.popup_error("ANIMAL-SPOT source File not set")
        return
    elif not os.path.isfile(values["-e_src_dir-"] + "/main.py"):
        sg.popup_error("Source File error")
        return

    if values["-e_prediction_dir-"] == "":
        sg.popup_error("Model directory not specified")
        return
    eval_cmd = eval_cmd + " --model_dir " + values["-e_prediction_dir-"]+"/"

    eval_cmd = eval_cmd + " " + values["-e_src_dir-"] + "/main.py"
    """
    pass