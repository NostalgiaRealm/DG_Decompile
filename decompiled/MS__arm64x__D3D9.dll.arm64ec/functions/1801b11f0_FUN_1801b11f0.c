/*
 * FUN_1801b11f0 at 1801b11f0
 * undefined FUN_1801b11f0(void)
 * Address ranges: 1801b11f0-1801b12ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801b11f0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *extraout_x11;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180225000);
  (*extraout_x11)(lVar1,lVar2,(int)param_1[3],*(undefined4 *)((longlong)param_1 + 0x1c),
                  (int)param_1[4],*(undefined4 *)((longlong)param_1 + 0x24),(int)param_1[5],
                  *(undefined8 *)((longlong)param_1 + 0x2c),
                  *(undefined4 *)((longlong)param_1 + 0x34),param_1[7],(int)param_1[8]);
  FUN_180203408(lVar1,lVar3,0);
  if (*(longlong *)((longlong)param_1 + 0x44) != 0) {
    FUN_180212050(lVar1 + (ulonglong)*(uint *)(lVar2 + 0x10) * 0x1ac0 + 0x20f0,
                  *(undefined4 *)((longlong)param_1 + 0x54),*(longlong *)((longlong)param_1 + 0x44),
                  *(undefined8 *)((longlong)param_1 + 0x4c));
  }
  return;
}

