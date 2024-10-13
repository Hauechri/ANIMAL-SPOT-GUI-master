import os
import sys
from pathlib import Path
# Add vendor directory to module search path
GUI_path = Path(os.path.abspath(os.path.dirname(__file__)))
ASG_path = GUI_path.parent.absolute()
vendor_dir = os.path.join(ASG_path, 'VENDOR')
sys.path.append(vendor_dir)

import utils.PySimpleGUIQt as sg
from train_GUI import getTrainGUI, TrainhandleInput
from pred_GUI import getPredGUI, PredhandleInput
from eval_GUI import getEvalGUI, EvalhandleInput
#from retrain_GUI import getRetrainGUI, RetrainhandleInput
working_directory=os.getcwd()

sg.set_options(font=("Arial Bold",14))

train_column = getTrainGUI()
pred_column = getPredGUI()
eval_column = getEvalGUI()
#retrain_column = getRetrainGUI()
layout = [[sg.TabGroup([
    [
        sg.Tab('Train', train_column),
        #sg.Tab('Retrain', retrain_column),
        sg.Tab('Prediction', pred_column),
        sg.Tab('Translation', eval_column)
    ]])],
]
window = sg.Window('ANIMAL-SPOT-GUI', layout, finalize=True)
#sg.Print('All Re-routing complete, you can see what is happening in this Debug window. \n'
#         'Please do not close this Debug window until you are finished with this program', do_not_reroute_stdout=False)
while True:
   event, values = window.read()
   TrainhandleInput(event=event, values=values, window=window)
   #RetrainhandleInput(event=event, values=values, window=window)
   PredhandleInput(event=event, values=values, window=window)
   EvalhandleInput(event=event, values=values, window=window)
   print (event, values)
   if event in (sg.WIN_CLOSED, 'Exit'):
      break

window.close()