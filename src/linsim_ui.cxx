// generated by Fast Light User Interface Designer (fluid) version 1.0302

#include "linsim_ui.h"
#include <string>
#include "main.h"
#include "csv.h"
#include "sound.h"
#include "sim_vals.h"
#include "sim.h"

Fl_Double_Window *linsim_window=(Fl_Double_Window *)0;

static void cb_mnu_open_simulation_set(Fl_Menu_*, void*) {
  load_simulation_set();
}

static void cb_mnu_save_simulation_set(Fl_Menu_*, void*) {
  save_simulation_set();
}

static void cb_mnu_save_simulation_set_as(Fl_Menu_*, void*) {
  save_simulation_set_as();
}

static void cb_E(Fl_Menu_*, void*) {
  clean_exit();
}

static void cb_mnuAddSimulation(Fl_Menu_*, void*) {
  add_simulation();
}

static void cb_mnuBatchProcess(Fl_Menu_*, void*) {
  open_batch_process_dialog();
}

static void cb_mnuAWGNseries(Fl_Menu_*, void*) {
  AWGNseries_dialog();
}

static void cb_mnu_choose_folder(Fl_Menu_*, void*) {
  choose_batch_folder();
}

Fl_Menu_Item menu_[] = {
 {"&File", 0,  0, 0, 64, FL_NORMAL_LABEL, 0, 14, 0},
 {"&Open", 0,  (Fl_Callback*)cb_mnu_open_simulation_set, 0, 0, FL_NORMAL_LABEL, 0, 14, 0},
 {"&Save", 0,  (Fl_Callback*)cb_mnu_save_simulation_set, 0, 0, FL_NORMAL_LABEL, 0, 14, 0},
 {"Save &As", 0,  (Fl_Callback*)cb_mnu_save_simulation_set_as, 0, 128, FL_NORMAL_LABEL, 0, 14, 0},
 {"E&xit", 0,  (Fl_Callback*)cb_E, 0, 0, FL_NORMAL_LABEL, 0, 14, 0},
 {0,0,0,0,0,0,0,0,0},
 {"&Simulation", 0,  0, 0, 64, FL_NORMAL_LABEL, 0, 14, 0},
 {"&Add", 0,  (Fl_Callback*)cb_mnuAddSimulation, 0, 128, FL_NORMAL_LABEL, 0, 14, 0},
 {"Batch", 0,  (Fl_Callback*)cb_mnuBatchProcess, 0, 0, FL_NORMAL_LABEL, 0, 14, 0},
 {"AWGN series", 0,  (Fl_Callback*)cb_mnuAWGNseries, 0, 128, FL_NORMAL_LABEL, 0, 14, 0},
 {"Choose ouput folder", 0,  (Fl_Callback*)cb_mnu_choose_folder, 0, 0, FL_NORMAL_LABEL, 0, 14, 0},
 {0,0,0,0,0,0,0,0,0},
 {"&Samplerate", 0,  0, 0, 64, FL_NORMAL_LABEL, 0, 14, 0},
 {"Same as input", 0,  0, 0, 12, FL_NORMAL_LABEL, 0, 14, 0},
 {"8000", 0,  0, 0, 8, FL_NORMAL_LABEL, 0, 14, 0},
 {"11025", 0,  0, 0, 8, FL_NORMAL_LABEL, 0, 14, 0},
 {"16000", 0,  0, 0, 8, FL_NORMAL_LABEL, 0, 14, 0},
 {"22050", 0,  0, 0, 8, FL_NORMAL_LABEL, 0, 14, 0},
 {"24000", 0,  0, 0, 8, FL_NORMAL_LABEL, 0, 14, 0},
 {"44100", 0,  0, 0, 8, FL_NORMAL_LABEL, 0, 14, 0},
 {"48000", 0,  0, 0, 8, FL_NORMAL_LABEL, 0, 14, 0},
 {0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0}
};

static void cb_Quick(Fl_Menu_*, void*) {
  guideURL();
}

static void cb_About(Fl_Menu_*, void*) {
  about();
}

Fl_Menu_Item menu_1[] = {
 {"&Help", 0,  0, 0, 64, FL_NORMAL_LABEL, 0, 14, 0},
 {"&Quick Guide", 0,  (Fl_Callback*)cb_Quick, 0, 0, FL_NORMAL_LABEL, 0, 14, 0},
 {"&About", 0,  (Fl_Callback*)cb_About, 0, 0, FL_NORMAL_LABEL, 0, 14, 0},
 {0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0}
};

Fl_Button *btn_select_input=(Fl_Button *)0;

static void cb_btn_select_input(Fl_Button*, void*) {
  fname_in = file_name("input.wav");
txt_input_file->value(fname_in.c_str());
}

Fl_Output *txt_input_file=(Fl_Output *)0;

Fl_Button *btn_select_output=(Fl_Button *)0;

static void cb_btn_select_output(Fl_Button*, void*) {
  fname_out = file_name("output.wav");
txt_output_file->value(fname_out.c_str());
}

Fl_Output *txt_output_file=(Fl_Output *)0;

Fl_Button *btn_select_simulation=(Fl_Button *)0;

static void cb_btn_select_simulation(Fl_Button*, void*) {
  select_simulation();
}

Fl_Input *txt_simulation=(Fl_Input *)0;

Fl_Output *txt_simulations_filename=(Fl_Output *)0;

Fl_Check_Button *p0_on=(Fl_Check_Button *)0;

static void cb_p0_on(Fl_Check_Button* o, void*) {
  sim_vals.p0.active = o->value();
}

Fl_Float_Input *inp_spread0=(Fl_Float_Input *)0;

static void cb_inp_spread0(Fl_Float_Input* o, void*) {
  sim_vals.p0.spread = atof(o->value());
}

Fl_Float_Input *inp_offset0=(Fl_Float_Input *)0;

static void cb_inp_offset0(Fl_Float_Input* o, void*) {
  sim_vals.p0.offset = atof(o->value());
}

Fl_Check_Button *p1_on=(Fl_Check_Button *)0;

static void cb_p1_on(Fl_Check_Button* o, void*) {
  sim_vals.p1.active = o->value();
}

Fl_Float_Input *inp_delay1=(Fl_Float_Input *)0;

static void cb_inp_delay1(Fl_Float_Input* o, void*) {
  sim_vals.d.delay1 = atof(o->value());
}

Fl_Float_Input *inp_spread1=(Fl_Float_Input *)0;

static void cb_inp_spread1(Fl_Float_Input* o, void*) {
  sim_vals.p1.spread = atof(o->value());
}

Fl_Float_Input *inp_offset1=(Fl_Float_Input *)0;

static void cb_inp_offset1(Fl_Float_Input* o, void*) {
  sim_vals.p1.offset = atof(o->value());
}

Fl_Check_Button *p2_on=(Fl_Check_Button *)0;

static void cb_p2_on(Fl_Check_Button* o, void*) {
  sim_vals.p2.active = o->value();
}

Fl_Float_Input *inp_delay2=(Fl_Float_Input *)0;

static void cb_inp_delay2(Fl_Float_Input* o, void*) {
  sim_vals.d.delay2 = atof(o->value());
}

Fl_Float_Input *inp_spread2=(Fl_Float_Input *)0;

static void cb_inp_spread2(Fl_Float_Input* o, void*) {
  sim_vals.p2.spread = atof(o->value());
}

Fl_Float_Input *inp_offset2=(Fl_Float_Input *)0;

static void cb_inp_offset2(Fl_Float_Input* o, void*) {
  sim_vals.p1.offset = atof(o->value());
}

Fl_Check_Button *inp_AWGN_on=(Fl_Check_Button *)0;

static void cb_inp_AWGN_on(Fl_Check_Button* o, void*) {
  sim_vals.AWGN_on = o->value();
}

Fl_Float_Input *inp_AWGN_rms=(Fl_Float_Input *)0;

static void cb_inp_AWGN_rms(Fl_Float_Input* o, void*) {
  sim_vals.snrdb = atof(o->value());
}

Fl_Progress *progress=(Fl_Progress *)0;

Fl_Button *btn_test=(Fl_Button *)0;

static void cb_btn_test(Fl_Button*, void*) {
  run_simulation();
}

Fl_Group *lbl_batch=(Fl_Group *)0;

Fl_Double_Window* make_linsim_window() {
  fname_in.clear();
  fname_out.clear();
  { linsim_window = new Fl_Double_Window(340, 365, "linsim v1.0.0");
    { Fl_Menu_Bar* o = new Fl_Menu_Bar(0, 0, 290, 22);
      o->menu(menu_);
    } // Fl_Menu_Bar* o
    { Fl_Menu_Bar* o = new Fl_Menu_Bar(291, 0, 50, 22);
      o->menu(menu_1);
    } // Fl_Menu_Bar* o
    { btn_select_input = new Fl_Button(3, 26, 60, 24, "Input");
      btn_select_input->callback((Fl_Callback*)cb_btn_select_input);
    } // Fl_Button* btn_select_input
    { txt_input_file = new Fl_Output(65, 26, 270, 24);
    } // Fl_Output* txt_input_file
    { btn_select_output = new Fl_Button(4, 55, 60, 24, "Output");
      btn_select_output->callback((Fl_Callback*)cb_btn_select_output);
    } // Fl_Button* btn_select_output
    { txt_output_file = new Fl_Output(65, 55, 270, 24);
    } // Fl_Output* txt_output_file
    { btn_select_simulation = new Fl_Button(4, 84, 60, 24, "Simul\'");
      btn_select_simulation->tooltip("Select simulation");
      btn_select_simulation->callback((Fl_Callback*)cb_btn_select_simulation);
    } // Fl_Button* btn_select_simulation
    { txt_simulation = new Fl_Input(65, 84, 270, 24);
    } // Fl_Input* txt_simulation
    { txt_simulations_filename = new Fl_Output(65, 113, 270, 24, "Models:");
      txt_simulations_filename->tooltip("Set of simulation models in use");
    } // Fl_Output* txt_simulations_filename
    { Fl_Group* o = new Fl_Group(8, 142, 328, 51);
      o->box(FL_ENGRAVED_FRAME);
      { Fl_Check_Button* o = p0_on = new Fl_Check_Button(22, 158, 70, 19, "Path 1");
        p0_on->down_box(FL_DOWN_BOX);
        p0_on->callback((Fl_Callback*)cb_p0_on);
        o->value(sim_vals.p0.active);
      } // Fl_Check_Button* p0_on
      { Fl_Float_Input* o = inp_spread0 = new Fl_Float_Input(180, 164, 70, 24, "Spread");
        inp_spread0->tooltip("spread in Hz (1 sigma)");
        inp_spread0->type(1);
        inp_spread0->callback((Fl_Callback*)cb_inp_spread0);
        inp_spread0->align(Fl_Align(FL_ALIGN_TOP));
        char val[20]; snprintf(val, sizeof(val), "%4.2f", sim_vals.p0.spread);o->value(val);
      } // Fl_Float_Input* inp_spread0
      { Fl_Float_Input* o = inp_offset0 = new Fl_Float_Input(255, 164, 70, 24, "Offset");
        inp_offset0->tooltip("frequency offset in Hz");
        inp_offset0->type(1);
        inp_offset0->callback((Fl_Callback*)cb_inp_offset0);
        inp_offset0->align(Fl_Align(FL_ALIGN_TOP));
        char val[20]; snprintf(val, sizeof(val), "%4.2f", sim_vals.p0.offset);o->value(val);
      } // Fl_Float_Input* inp_offset0
      o->end();
    } // Fl_Group* o
    { Fl_Group* o = new Fl_Group(9, 198, 328, 51);
      o->box(FL_ENGRAVED_FRAME);
      { Fl_Check_Button* o = p1_on = new Fl_Check_Button(23, 214, 70, 19, "Path 2");
        p1_on->down_box(FL_DOWN_BOX);
        p1_on->callback((Fl_Callback*)cb_p1_on);
        o->value(sim_vals.p1.active);
      } // Fl_Check_Button* p1_on
      { Fl_Float_Input* o = inp_delay1 = new Fl_Float_Input(101, 217, 70, 25, "Delay");
        inp_delay1->tooltip("delay in milliseconds");
        inp_delay1->type(1);
        inp_delay1->callback((Fl_Callback*)cb_inp_delay1);
        inp_delay1->align(Fl_Align(FL_ALIGN_TOP));
        char val[20]; snprintf(val, sizeof(val), "%4.2f", sim_vals.d.delay1);o->value(val);
      } // Fl_Float_Input* inp_delay1
      { Fl_Float_Input* o = inp_spread1 = new Fl_Float_Input(180, 217, 70, 24, "Spread");
        inp_spread1->tooltip("spread in Hz (1 sigma)");
        inp_spread1->type(1);
        inp_spread1->callback((Fl_Callback*)cb_inp_spread1);
        inp_spread1->align(Fl_Align(FL_ALIGN_TOP));
        char val[20]; snprintf(val, sizeof(val), "%4.2f", sim_vals.p1.spread);o->value(val);
      } // Fl_Float_Input* inp_spread1
      { Fl_Float_Input* o = inp_offset1 = new Fl_Float_Input(255, 217, 70, 24, "Offset");
        inp_offset1->tooltip("frequency offset in Hz");
        inp_offset1->type(1);
        inp_offset1->callback((Fl_Callback*)cb_inp_offset1);
        inp_offset1->align(Fl_Align(FL_ALIGN_TOP));
        char val[20]; snprintf(val, sizeof(val), "%4.2f", sim_vals.p1.offset);o->value(val);
      } // Fl_Float_Input* inp_offset1
      o->end();
    } // Fl_Group* o
    { Fl_Group* o = new Fl_Group(9, 254, 328, 51);
      o->box(FL_ENGRAVED_FRAME);
      { Fl_Check_Button* o = p2_on = new Fl_Check_Button(23, 270, 70, 19, "Path 3");
        p2_on->down_box(FL_DOWN_BOX);
        p2_on->callback((Fl_Callback*)cb_p2_on);
        o->value(sim_vals.p2.active);
      } // Fl_Check_Button* p2_on
      { Fl_Float_Input* o = inp_delay2 = new Fl_Float_Input(101, 274, 70, 25, "Delay");
        inp_delay2->tooltip("delay in milliseconds");
        inp_delay2->type(1);
        inp_delay2->callback((Fl_Callback*)cb_inp_delay2);
        inp_delay2->align(Fl_Align(FL_ALIGN_TOP));
        char val[20]; snprintf(val, sizeof(val), "%4.2f", sim_vals.d.delay2);o->value(val);
      } // Fl_Float_Input* inp_delay2
      { Fl_Float_Input* o = inp_spread2 = new Fl_Float_Input(180, 274, 70, 24, "Spread");
        inp_spread2->tooltip("spread in Hz (1 sigma)");
        inp_spread2->type(1);
        inp_spread2->callback((Fl_Callback*)cb_inp_spread2);
        inp_spread2->align(Fl_Align(FL_ALIGN_TOP));
        char val[20]; snprintf(val, sizeof(val), "%4.2f", sim_vals.p2.spread);o->value(val);
      } // Fl_Float_Input* inp_spread2
      { Fl_Float_Input* o = inp_offset2 = new Fl_Float_Input(255, 274, 70, 24, "Offset");
        inp_offset2->tooltip("frequency offset in Hz");
        inp_offset2->type(1);
        inp_offset2->callback((Fl_Callback*)cb_inp_offset2);
        inp_offset2->align(Fl_Align(FL_ALIGN_TOP));
        char val[20]; snprintf(val, sizeof(val), "%4.2f", sim_vals.p2.offset);o->value(val);
      } // Fl_Float_Input* inp_offset2
      o->end();
    } // Fl_Group* o
    { Fl_Group* o = new Fl_Group(9, 309, 166, 51);
      o->box(FL_ENGRAVED_FRAME);
      { Fl_Check_Button* o = inp_AWGN_on = new Fl_Check_Button(23, 325, 70, 19, "AWGN");
        inp_AWGN_on->tooltip("Gaussian noise on/off");
        inp_AWGN_on->down_box(FL_DOWN_BOX);
        inp_AWGN_on->callback((Fl_Callback*)cb_inp_AWGN_on);
        o->value(sim_vals.AWGN_on);
      } // Fl_Check_Button* inp_AWGN_on
      { Fl_Float_Input* o = inp_AWGN_rms = new Fl_Float_Input(100, 329, 70, 25, "S/N");
        inp_AWGN_rms->tooltip("s/n in dB");
        inp_AWGN_rms->type(1);
        inp_AWGN_rms->callback((Fl_Callback*)cb_inp_AWGN_rms);
        inp_AWGN_rms->align(Fl_Align(FL_ALIGN_TOP));
        char val[20];
        snprintf(val, sizeof(val), "%4.1f", sim_vals.snrdb);
        o->value(val);
      } // Fl_Float_Input* inp_AWGN_rms
      o->end();
    } // Fl_Group* o
    { Fl_Progress* o = progress = new Fl_Progress(179, 311, 153, 21);
      o->value(0);
      o->minimum(0); o->maximum(1);
      o->selection_color(FL_DARK_BLUE);
    } // Fl_Progress* progress
    { btn_test = new Fl_Button(261, 336, 70, 24, "Run Test");
      btn_test->callback((Fl_Callback*)cb_btn_test);
    } // Fl_Button* btn_test
    { lbl_batch = new Fl_Group(180, 335, 80, 25, "BATCH");
      lbl_batch->labelfont(1);
      lbl_batch->labelcolor((Fl_Color)1);
      lbl_batch->align(Fl_Align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE));
      lbl_batch->hide();
      lbl_batch->end();
    } // Fl_Group* lbl_batch
    linsim_window->end();
  } // Fl_Double_Window* linsim_window
  return linsim_window;
}

Fl_Check_Browser *tbl_batch_simulations=(Fl_Check_Browser *)0;

Fl_Button *btn_cancel_batch=(Fl_Button *)0;

static void cb_btn_cancel_batch(Fl_Button*, void*) {
  cancel_batch_process();
}

Fl_Button *btn_clear_batch_selections=(Fl_Button *)0;

static void cb_btn_clear_batch_selections(Fl_Button*, void*) {
  clear_all_simulation();
}

Fl_Button *btn_all_batch=(Fl_Button *)0;

static void cb_btn_all_batch(Fl_Button*, void*) {
  select_all_simulations();
}

Fl_Return_Button *btn_batch_process=(Fl_Return_Button *)0;

static void cb_btn_batch_process(Fl_Return_Button*, void*) {
  batch_process_items();
}

Fl_Double_Window* make_batch_selector_dialog() {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = new Fl_Double_Window(340, 280, "Batch Processing");
    w = o;
    { tbl_batch_simulations = new Fl_Check_Browser(0, 0, 340, 245);
      tbl_batch_simulations->tooltip("check simulations to batch process");
      Fl_Group::current()->resizable(tbl_batch_simulations);
    } // Fl_Check_Browser* tbl_batch_simulations
    { btn_cancel_batch = new Fl_Button(5, 252, 70, 22, "Cancel");
      btn_cancel_batch->tooltip("Cancel - no change in model");
      btn_cancel_batch->callback((Fl_Callback*)cb_btn_cancel_batch);
    } // Fl_Button* btn_cancel_batch
    { btn_clear_batch_selections = new Fl_Button(86, 252, 70, 22, "Clear");
      btn_clear_batch_selections->tooltip("De-select all models");
      btn_clear_batch_selections->callback((Fl_Callback*)cb_btn_clear_batch_selections);
    } // Fl_Button* btn_clear_batch_selections
    { btn_all_batch = new Fl_Button(168, 252, 70, 22, "All");
      btn_all_batch->tooltip("Select all models");
      btn_all_batch->callback((Fl_Callback*)cb_btn_all_batch);
    } // Fl_Button* btn_all_batch
    { btn_batch_process = new Fl_Return_Button(250, 252, 84, 22, "Process");
      btn_batch_process->tooltip("Use checked simulation models");
      btn_batch_process->callback((Fl_Callback*)cb_btn_batch_process);
    } // Fl_Return_Button* btn_batch_process
    o->end();
  } // Fl_Double_Window* o
  return w;
}

static void cb_Cancel(Fl_Button*, void*) {
  cancel_selection();
}

Fl_Return_Button *btn_select=(Fl_Return_Button *)0;

static void cb_btn_select(Fl_Return_Button*, void*) {
  select_entry(tbl_simulations->value());
}

Fl_Browser *tbl_simulations=(Fl_Browser *)0;

static void cb_tbl_simulations(Fl_Browser*, void*) {
  tbl_simulations_selected();
}

Fl_Button *btn_delete_selection=(Fl_Button *)0;

static void cb_btn_delete_selection(Fl_Button*, void*) {
  delete_selection(tbl_simulations->value());
}

Fl_Button *btn_update_selection=(Fl_Button *)0;

static void cb_btn_update_selection(Fl_Button*, void*) {
  update_selection(tbl_simulations->value());
}

Fl_Double_Window* make_selector_dialog() {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = new Fl_Double_Window(340, 270, "Select Simulation Model");
    w = o;
    { Fl_Button* o = new Fl_Button(165, 245, 70, 20, "Cancel");
      o->tooltip("Cancel - no change in model");
      o->callback((Fl_Callback*)cb_Cancel);
    } // Fl_Button* o
    { btn_select = new Fl_Return_Button(245, 245, 84, 20, "Select");
      btn_select->tooltip("Use hi-lighted model");
      btn_select->callback((Fl_Callback*)cb_btn_select);
    } // Fl_Return_Button* btn_select
    { tbl_simulations = new Fl_Browser(0, 0, 340, 240);
      tbl_simulations->tooltip("Select & highlight model");
      tbl_simulations->type(2);
      tbl_simulations->callback((Fl_Callback*)cb_tbl_simulations);
      Fl_Group::current()->resizable(tbl_simulations);
    } // Fl_Browser* tbl_simulations
    { btn_delete_selection = new Fl_Button(5, 245, 70, 20, "Delete");
      btn_delete_selection->tooltip("Delete hi-lighted simulation");
      btn_delete_selection->callback((Fl_Callback*)cb_btn_delete_selection);
      btn_delete_selection->deactivate();
    } // Fl_Button* btn_delete_selection
    { btn_update_selection = new Fl_Button(85, 245, 70, 20, "Update");
      btn_update_selection->tooltip("Update hi-lighted simulation");
      btn_update_selection->callback((Fl_Callback*)cb_btn_update_selection);
      btn_update_selection->deactivate();
    } // Fl_Button* btn_update_selection
    o->end();
  } // Fl_Double_Window* o
  return w;
}

Fl_Spinner *cntr_Low_dB=(Fl_Spinner *)0;

Fl_Spinner *cntr_High_dB=(Fl_Spinner *)0;

Fl_Spinner *cntr_Step_dB=(Fl_Spinner *)0;

Fl_Return_Button *btn_AWGNseries_process=(Fl_Return_Button *)0;

static void cb_btn_AWGNseries_process(Fl_Return_Button*, void*) {
  AWGNseries_process();
}

Fl_Button *btn_cancel_AWGNseries=(Fl_Button *)0;

static void cb_btn_cancel_AWGNseries(Fl_Button*, void*) {
  cancel_AWGNseries();
}

Fl_Double_Window* make_AWGNseries_dialog() {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = new Fl_Double_Window(270, 120, "AGWN series");
    w = o;
    { cntr_Low_dB = new Fl_Spinner(84, 51, 60, 25, "Lower s/n");
      cntr_Low_dB->tooltip("Lower limit in dB");
      cntr_Low_dB->minimum(-40);
      cntr_Low_dB->maximum(40);
      cntr_Low_dB->value(0);
    } // Fl_Spinner* cntr_Low_dB
    { cntr_High_dB = new Fl_Spinner(85, 20, 60, 25, "Upper s/n");
      cntr_High_dB->tooltip("Upper limit in dB");
      cntr_High_dB->minimum(-20);
      cntr_High_dB->maximum(40);
      cntr_High_dB->value(20);
    } // Fl_Spinner* cntr_High_dB
    { cntr_Step_dB = new Fl_Spinner(84, 81, 60, 25, "Step size");
      cntr_Step_dB->tooltip("Step size in dB");
      cntr_Step_dB->maximum(20);
    } // Fl_Spinner* cntr_Step_dB
    { btn_AWGNseries_process = new Fl_Return_Button(170, 58, 84, 22, "Process");
      btn_AWGNseries_process->tooltip("Use checked simulation models");
      btn_AWGNseries_process->callback((Fl_Callback*)cb_btn_AWGNseries_process);
    } // Fl_Return_Button* btn_AWGNseries_process
    { btn_cancel_AWGNseries = new Fl_Button(177, 18, 70, 22, "Cancel");
      btn_cancel_AWGNseries->tooltip("Cancel - no change in model");
      btn_cancel_AWGNseries->callback((Fl_Callback*)cb_btn_cancel_AWGNseries);
    } // Fl_Button* btn_cancel_AWGNseries
    o->end();
  } // Fl_Double_Window* o
  return w;
}

Fl_File_Input *finp_output_wav_folder=(Fl_File_Input *)0;

static void cb_Select(Fl_Button*, void*) {
  output_folder_select();
}

Fl_Check_Button *btn_same_as_input_file=(Fl_Check_Button *)0;

static void cb_Close(Fl_Button*, void*) {
  close_output_dialog();
}

Fl_Double_Window* make_folder_dialog() {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = new Fl_Double_Window(350, 105, "Output file location");
    w = o;
    { finp_output_wav_folder = new Fl_File_Input(4, 22, 342, 35, "Store output wav files in:");
      finp_output_wav_folder->align(Fl_Align(FL_ALIGN_TOP_LEFT));
    } // Fl_File_Input* finp_output_wav_folder
    { Fl_Button* o = new Fl_Button(94, 62, 70, 36, "Select \nFolder");
      o->callback((Fl_Callback*)cb_Select);
    } // Fl_Button* o
    { btn_same_as_input_file = new Fl_Check_Button(180, 68, 164, 24, "Same as input file");
      btn_same_as_input_file->down_box(FL_DOWN_BOX);
      btn_same_as_input_file->value(1);
    } // Fl_Check_Button* btn_same_as_input_file
    { Fl_Button* o = new Fl_Button(10, 67, 70, 26, "Close");
      o->callback((Fl_Callback*)cb_Close);
    } // Fl_Button* o
    o->end();
  } // Fl_Double_Window* o
  return w;
}
