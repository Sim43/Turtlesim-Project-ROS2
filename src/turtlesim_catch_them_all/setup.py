from setuptools import find_packages, setup

package_name = 'turtlesim_catch_them_all'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='zero',
    maintainer_email='zero@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "turtle_spawner = turtlesim_catch_them_all.turtle_spawner:main",
            "turtlesim_controller = turtlesim_catch_them_all.controller:main",
        ],
    },
)
