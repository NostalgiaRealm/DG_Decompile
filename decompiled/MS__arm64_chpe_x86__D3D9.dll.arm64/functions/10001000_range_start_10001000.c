/*
 * range_start_10001000 at 10001000
 * undefined range_start_10001000(void)
 * Address ranges: 10001000-10001003
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Control flow encountered bad instruction data */

int range_start_10001000(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  bool in_ZR;
  bool in_CY;
  uint uVar2;
  undefined4 *extraout_w11;
  int unaff_w19;
  int unaff_w20;
  uint unaff_w23;
  int unaff_w25;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  uint in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined1 *in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  if (!in_CY || in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_10081210(param_1,&stack0x00000090,param_3,param_1 & 0xff);
  if (unaff_w25 == 0) {
    in_stack_00000008 = *(undefined4 *)(unaff_w19 + 800);
  }
  else {
    in_stack_00000008 = 0;
  }
  in_stack_00000010 = unaff_w23 | 0x100;
  in_stack_00000018 = &stack0x00000090;
  in_stack_0000001c = 0;
  FUN_10122c20(&stack0x00000000,0x20);
  iVar1 = *(int *)(unaff_w19 + 0x3b0);
  uVar2 = 0;
  while( true ) {
    if (iVar1 == 0) {
      return unaff_w20 + 0xc;
    }
    if (3 < uVar2) break;
    unaff_w19 = FUN_10121648(unaff_w19,*(undefined4 *)(unaff_w19 + (uVar2 + 0xec) * 4));
    uVar2 = uVar2 + 1;
    *extraout_w11 = 0;
    iVar1 = *(int *)(unaff_w19 + uVar2 * 4 + 0x3b0);
  }
  return unaff_w20 + 0xc;
}

