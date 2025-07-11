import sys
import GPUtil
from PyQt6.uic import loadUi
from PyQt6.QtCore import Qt, QSize
from PyQt6.QtGui import QAction, QIcon
from PyQt6.QtWidgets import QApplication, QLabel, QMainWindow, QMenu, QPushButton, QTabWidget
import assets
#from layout_colourwidget import Colour

class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()

        gpus = GPUtil.getGPUs()

        loadUi("./assets/ui/encodegui.ui", self)
        
        self.setWindowTitle("EncodeGUI-Py v1.0 - [GPU 0: " + gpus[0].name + "]")  
        

app = QApplication(sys.argv)

window = MainWindow()
window.show()

app.exec()
