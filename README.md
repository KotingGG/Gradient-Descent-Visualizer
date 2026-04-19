# Gradient Descent Visualizer: C++ Core + Python GUI

![Python Version](https://img.shields.io/badge/python-3.13%252B-blue.svg) ![C++](https://img.shields.io/badge/C%2B%2B-17%2B-00599C.svg?logo=c%2B%2B) ![Machine Learning](https://img.shields.io/badge/Machine%20Learning-Logistic%20Regression-orange.svg) ![License](https://img.shields.io/badge/license-MIT-yellow.svg) 

## **Overview**  
An interactive tool for visualizing logistic regression, gradient descent, and regularization in action.  
The computational core (loss calculation, gradients, and weight updates) is written in **C++** and wrapped as a Python module using **pybind11**.  
The user interface and graphics are implemented in **Python** (`matplotlib`, `numpy`).  
The application runs inside a **Docker** container, ensuring a fully reproducible environment.  
Thanks to the C++ backend, the tool can handle datasets of **over 100K points** without performance degradation.

## **Folder structure:**
```
Gradient-Descent-Visualizer/
├── core/                                 # C++ computational core
│   ├── include/                          
│   │   └── gdv/                          
│   │       ├── logistic_regression.h     # Logistic regression class
│   │       ├── losses.h                  # Loss functions and gradients (with L1/L2)
│   │       └── optimizers.h              # Gradient descent step
│   ├── src/                              # C++ module implementations
│   │   ├── logistic_regression.cpp
│   │   ├── losses.cpp
│   │   └── optimizers.cpp
│   ├── bindings/                         
│   │   └── pybind_wrapper.cpp            # Export classes and functions to Python
│   └── CMakeLists.txt                    # Build C++ library and Python module
│
├── python/                               
│   ├── gdv_vis/                          
│   │   ├── __init__.py
│   │   ├── data_generator.py             # Synthetic dataset generation (NumPy)
│   │   ├── visualizer.py                 # Interactive matplotlib window with sliders
│   │   └── runner.py                     # Glue: calls C++ module and updates plots
│   └── demo.py                           # Application entry point
│
├── configs/
│   ├── default_dataset.yaml              # Data generation parameters (points, spread)
│   └── viz_settings.yaml                 # Colors, window size, axis limits
│
├── docs/
│   ├── architecture.md                   # Architectural overview (C++/Python integration)
│   └── usage.md                          # Setup and launch instructions
│
├── CMakeLists.txt                        # Root CMake (manages entire C++ build)
├── Dockerfile                            
├── requirements.txt                      
├── pyproject.toml                        
├── .gitignore
└── README.md
```

TODO: fill out the readme
