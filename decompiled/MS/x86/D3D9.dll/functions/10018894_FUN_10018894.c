/*
 * FUN_10018894 at 10018894
 * undefined __fastcall FUN_10018894(void * param_1)
 * Address ranges: 10018894-100189da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10018894(void *param_1)

{
  int iVar1;
  void *local_8;
  
  *(undefined4 *)((int)param_1 + 0x324) = 3;
  *(undefined4 *)((int)param_1 + 0x330) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x32c) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x328) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x334) = 0;
  *(undefined4 *)((int)param_1 + 0x344) = 0;
  *(undefined4 *)((int)param_1 + 0x340) = 0;
  *(undefined4 *)((int)param_1 + 0x33c) = 0;
  *(undefined4 *)((int)param_1 + 0x338) = 0;
  *(undefined4 *)((int)param_1 + 0x354) = 0;
  *(undefined4 *)((int)param_1 + 0x350) = 0;
  *(undefined4 *)((int)param_1 + 0x34c) = 0;
  *(undefined4 *)((int)param_1 + 0x348) = 0;
  *(undefined4 *)((int)param_1 + 0x360) = 0;
  *(undefined4 *)((int)param_1 + 0x35c) = 0;
  *(undefined4 *)((int)param_1 + 0x358) = 0;
  *(undefined4 *)((int)param_1 + 0x368) = 0;
  *(undefined4 *)((int)param_1 + 0x364) = 0;
  *(undefined4 *)((int)param_1 + 0x36c) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x370) = 0;
  *(undefined4 *)((int)param_1 + 0x374) = 0;
  *(undefined4 *)((int)param_1 + 0x378) = 0;
  *(undefined4 *)((int)param_1 + 0x37c) = 0;
  *(undefined4 *)((int)param_1 + 0x380) = 0;
  *(undefined4 *)((int)param_1 + 900) = 0;
  *(undefined4 *)((int)param_1 + 0x388) = 0;
  *(undefined1 *)((int)param_1 + 0x38c) = 0;
  local_8 = param_1;
  FUN_1000fc01((undefined4 *)((int)param_1 + 0x318));
  iVar1 = 8;
  do {
    local_8 = (void *)0xffffffff;
    FUN_10003d8f((undefined4 *)((int)param_1 + 0x318),&local_8);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_100182dd(param_1);
  return;
}

