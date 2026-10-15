/*
 * FUN_18012bbb8 at 18012bbb8
 * undefined FUN_18012bbb8(void)
 * Address ranges: 18012bbb8-18012bcd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18012bbb8(undefined8 param_1,ulonglong param_2)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong lVar4;
  longlong lVar5;
  
  param_2 = param_2 & 0xffffffff;
  lVar4 = param_2 * 600;
  iVar2 = FUN_1801042d0(&DAT_18024e848 + param_2 * 0x96);
  if (iVar2 == 0) {
    lVar5 = *(longlong *)(&DAT_18024ea30 + lVar4);
    if (lVar5 != 0) {
      FUN_18012d388(lVar5);
      FUN_1802229d8(lVar5,0xb8);
    }
    lVar3 = (&DAT_18024e840)[param_2 * 0x4b];
    *(undefined8 *)(&DAT_18024ea30 + lVar4) = 0;
    puVar1 = __hybrid_os_arm64x_dispatch_icall;
    iVar2 = 0;
    lVar5 = 0;
    do {
      if ((&DAT_18024e840)[lVar5 * 0x4b] == lVar3) {
        iVar2 = (&DAT_18024e848)[lVar5 * 0x96] + iVar2;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x20);
    if (iVar2 == 0) {
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)();
      (*(code *)puVar1)(0x180224000);
      (*extraout_x11_00)();
    }
    (&DAT_18024e840)[param_2 * 0x4b] = 0;
    FUN_1802229d8((&DAT_18024ea68)[param_2 * 0x4b]);
    (&DAT_18024ea68)[param_2 * 0x4b] = 0;
    *(undefined4 *)(&DAT_18024ea70 + param_2 * 0x4b) = 0;
    *(undefined4 *)((longlong)&DAT_18024ea70 + lVar4 + 4) = 0;
    FUN_1802229d8((&DAT_18024ea78)[param_2 * 0x4b]);
    (&DAT_18024ea78)[param_2 * 0x4b] = 0;
    (&DAT_18024ea80)[param_2 * 0x4b] = 0;
    FUN_1802229d8((&DAT_18024ea88)[param_2 * 0x4b]);
    (&DAT_18024ea88)[param_2 * 0x4b] = 0;
    (&DAT_18024ea90)[param_2 * 0x4b] = 0;
  }
  return;
}

