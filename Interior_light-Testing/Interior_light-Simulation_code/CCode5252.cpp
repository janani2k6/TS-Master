// GEN BLOCK BEGIN Include
#define TSMP_IMPL
#include "TSMaster.h"
#include "MPLibrary.h"
#include "Database.h"
#include "TSMasterBaseInclude.h"
#include "Configuration.h"
// GEN BLOCK END Include

// CODE BLOCK BEGIN On_Var_Change On_FrontLeft_Door_Status RnJvbnRMZWZ0X0Rvb3JfU3RhdHVzLC0x
// On variable change handler "On_FrontLeft_Door_Status" for variable "FrontLeft_Door_Status" [On Written]
void on_var_change_On_FrontLeft_Door_Status(void) { try { // variable = FrontLeft_Door_Status
s32 fl, fr, rl, rr;
app.get_system_var_int32("FrontLeft_Door_Status", &fl);
app.get_system_var_int32("FrontRight_Door_Status", &fr);
app.get_system_var_int32("RearLeft_Door_Status", &rl);
app.get_system_var_int32("RearRight_Door_Status", &rr);
if((fl==1)||(fr==1)||(rl==1)||(rr==1)){
app.set_system_var_int32("InteriorLight_Status",1);
}else{
app.set_system_var_int32("InteriorLight_Status",0);
}

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END On_Var_Change On_FrontLeft_Door_Status

// CODE BLOCK BEGIN On_Var_Change On_FrontRight_Door_Status RnJvbnRSaWdodF9Eb29yX1N0YXR1cywtMQ__
// On variable change handler "On_FrontRight_Door_Status" for variable "FrontRight_Door_Status" [On Written]
void on_var_change_On_FrontRight_Door_Status(void) { try { // variable = FrontRight_Door_Status
/*int fl=0, fr= 0, rl = 0, rr = 0;

//Read door status variables
app.get_system_var_int32("FrontLeft_Door_Status", &fl);
app.get_system_var_int32("FrontRight_Door_Status", &fr);
app.get_system_var_int32("RearLeft_Door_Status", &rl);
app.get_system_var_int32("RearRight_Door_Status", &rr);

//OR logic: interior light ON ifany door is open
int Interior=(fl || fr || rl || rr) ? 1 : 0;

//update interior light status
app.set_system_var_int32("InteriorLight_Status", Interior);
*/

//USING IF ELSE
s32 fl, fr, rl, rr;
app.get_system_var_int32("FrontLeft_Door_Status", &fl);
app.get_system_var_int32("FrontRight_Door_Status", &fr);
app.get_system_var_int32("RearLeft_Door_Status", &rl);
app.get_system_var_int32("RearRight_Door_Status", &rr);
if((fl==1)||(fr==1)||(rl==1)||(rr==1)){
app.set_system_var_int32("InteriorLight_Status",1);
}else{
app.set_system_var_int32("InteriorLight_Status",0);
}

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END On_Var_Change On_FrontRight_Door_Status

// CODE BLOCK BEGIN On_Var_Change On_RearLeft_Door_Status UmVhckxlZnRfRG9vcl9TdGF0dXMsLTE_
// On variable change handler "On_RearLeft_Door_Status" for variable "RearLeft_Door_Status" [On Written]
void on_var_change_On_RearLeft_Door_Status(void) { try { // variable = RearLeft_Door_Status
/*int fl=0, fr= 0, rl = 0, rr = 0;

//Read door status variables
app.get_system_var_int32("FrontLeft_Door_Status", &fl);
app.get_system_var_int32("FrontRight_Door_Status", &fr);
app.get_system_var_int32("RearLeft_Door_Status", &rl);
app.get_system_var_int32("RearRight_Door_Status", &rr);

//OR logic: interior light ON ifany door is open
int Interior=(fl || fr || rl || rr) ? 1 : 0;

//update interior light status
app.set_system_var_int32("InteriorLight_Status", Interior);
*/

//USING IF ELSE
s32 fl, fr, rl, rr;
app.get_system_var_int32("FrontLeft_Door_Status", &fl);
app.get_system_var_int32("FrontRight_Door_Status", &fr);
app.get_system_var_int32("RearLeft_Door_Status", &rl);
app.get_system_var_int32("RearRight_Door_Status", &rr);
if((fl==1)||(fr==1)||(rl==1)||(rr==1)){
app.set_system_var_int32("InteriorLight_Status",1);
}else{
app.set_system_var_int32("InteriorLight_Status",0);
}

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END On_Var_Change On_RearLeft_Door_Status

// CODE BLOCK BEGIN On_Var_Change On_RearRight_Door_Status UmVhclJpZ2h0X0Rvb3JfU3RhdHVzLC0x
// On variable change handler "On_RearRight_Door_Status" for variable "RearRight_Door_Status" [On Written]
void on_var_change_On_RearRight_Door_Status(void) { try { // variable = RearRight_Door_Status
/*int fl=0, fr= 0, rl = 0, rr = 0;

//Read door status variables
app.get_system_var_int32("FrontLeft_Door_Status", &fl);
app.get_system_var_int32("FrontRight_Door_Status", &fr);
app.get_system_var_int32("RearLeft_Door_Status", &rl);
app.get_system_var_int32("RearRight_Door_Status", &rr);

//OR logic: interior light ON ifany door is open
int Interior=(fl || fr || rl || rr) ? 1 : 0;

//update interior light status
app.set_system_var_int32("InteriorLight_Status", Interior);
*/

//USING IF ELSE
s32 fl, fr, rl, rr;
app.get_system_var_int32("FrontLeft_Door_Status", &fl);
app.get_system_var_int32("FrontRight_Door_Status", &fr);
app.get_system_var_int32("RearLeft_Door_Status", &rl);
app.get_system_var_int32("RearRight_Door_Status", &rr);
if((fl==1)||(fr==1)||(rl==1)||(rr==1)){
app.set_system_var_int32("InteriorLight_Status",1);
}else{
app.set_system_var_int32("InteriorLight_Status",0);
}

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END On_Var_Change On_RearRight_Door_Status

// CODE BLOCK BEGIN Step_Function  NQ__
// Main step function being executed every 5 ms
void step(void) { try { // interval = 5 ms

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END Step_Function 

