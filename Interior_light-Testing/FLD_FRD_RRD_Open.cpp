// GEN BLOCK BEGIN Include
#define TSMP_IMPL
#include "TSMaster.h"
#include "MPLibrary.h"
#include "Database.h"
#include "TSMasterBaseInclude.h"
#include "Configuration.h"
// GEN BLOCK END Include

// CODE BLOCK BEGIN On_Start FLD_FRD_RRD_Open
// On start handler "FLD_FRD_RRD_Open"
void on_start_FLD_FRD_RRD_Open(void) { try { // on start event
s32 FLD = 0;
s32 FRD =0;
s32 RRD = 0;
s32 interior = 0;
app.set_system_var_int32("FrontLeft_Door_Status",1);
app.set_system_var_int32("FrontRight_Door_Status",1);
app.set_system_var_int32("RearRight_Door_Status",1);
app.get_system_var_int32("FrontLeft_Door_Status",&FLD);
app.get_system_var_int32("FrontRight_Door_Status",&FRD);
app.get_system_var_int32("RearRight_Door_Status",&RRD);
app.get_system_var_int32("InteriorLight_Status",&interior);
if(FLD==1 && FRD==1 && RRD==1 && interior==1){
app.wait(1000,"");
test.set_verdict_ok("Test Pass");
}else{
app.wait(1000,"");
test.set_verdict_ok("Test Failed");
}
app.wait(2000,"");
app.set_system_var_int32("FrontLeft_Door_Status",0);
app.set_system_var_int32("FrontRight_Door_Status",0);
app.set_system_var_int32("RearRight_Door_Status",0);
app.wait(1000,"");
app.terminate_application();
app.wait(1000,"");


} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END On_Start FLD_FRD_RRD_Open

// CODE BLOCK BEGIN Step_Function  NQ__
// Main step function being executed every 5 ms
void step(void) { try { // interval = 5 ms

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END Step_Function 

