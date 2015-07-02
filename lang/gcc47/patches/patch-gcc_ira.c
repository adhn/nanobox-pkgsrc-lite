$NetBSD$

Disable -fomit-frame-pointer.

--- gcc/ira.c.orig	2012-02-21 23:27:59.000000000 +0000
+++ gcc/ira.c
@@ -1620,7 +1620,7 @@ ira_init (void)
 {
   free_register_move_costs ();
   setup_reg_mode_hard_regset ();
-  setup_alloc_regs (flag_omit_frame_pointer != 0);
+  setup_alloc_regs (0 != 0);
   setup_class_subset_and_memory_move_costs ();
   setup_reg_class_nregs ();
   setup_prohibited_class_mode_regs ();
@@ -1785,7 +1785,7 @@ ira_setup_eliminable_regset (void)
      case.  At some point, we should improve this by emitting the
      sp-adjusting insns for this case.  */
   int need_fp
-    = (! flag_omit_frame_pointer
+    = (! 0
        || (cfun->calls_alloca && EXIT_IGNORE_STACK)
        /* We need the frame pointer to catch stack overflow exceptions
 	  if the stack pointer is moving.  */