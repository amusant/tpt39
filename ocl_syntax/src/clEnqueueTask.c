cl_int clEnqueueTask (	cl_command_queue  command_queue ,
					 	cl_kernel  kernel ,
 						cl_uint  num_events_in_wait_list ,
 						const cl_event  *event_wait_list ,
 						cl_event  *event )

//command_queue A valid command-queue. The kernel will be queued for execution on
//the device associated with command_queue.

//kernel A valid kernel object. The OpenCL context associated with kernel and
//command_queue must be the same.

//num_events_in_wait_list , event_wait_list Sspecify events that need to complete
//before this particular command can be executed. If event_wait_list is NULL,
//then this particular command does not wait on any event to complete. If
//event_wait_list is NULL, num_events_in_wait_list must be 0. If event_wait_list
//is not NULL, the list of events pointed to by event_wait_list must be valid and
//num_events_in_wait_list must be greater than 0. The events specified in
//event_wait_list act as synchronization points. The context associated with
//events in event_wait_list and command_queue must be the same. The memory
//associated with event_wait_list can be reused or freed after the function
//returns.

//event Returns an event object that identifies this particular kernel execution
//instance. Event objects are unique and can be used to identify a particular
//kernel execution instance later on. If event is NULL, no event will be created
//for this kernel execution instance and therefore it will not be possible for
//the application to query or queue a wait for this particular kernel execution
//instance.
