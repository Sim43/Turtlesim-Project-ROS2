from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()
    
    main_turtle = Node(
        package="turtlesim",
        executable="turtlesim_node",
    )
    
    control = Node(
        package="turtlesim_catch_them_all",
        executable="turtlesim_controller",
        parameters=[
            {"catch_closest_turtle_first": True}
        ]
    )
    
    spawner = Node(
        package="turtlesim_catch_them_all",
        executable="turtle_spawner",
        parameters=[
            {"spawn_frequency": 1.25}
        ]
    )
    
    ld.add_action(main_turtle)
    ld.add_action(control)
    ld.add_action(spawner)

    return ld
