import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/zero/turtlesim_project/install/turtlesim_catch_them_all'
