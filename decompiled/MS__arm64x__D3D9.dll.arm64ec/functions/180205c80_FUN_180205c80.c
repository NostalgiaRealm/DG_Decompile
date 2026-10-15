/*
 * FUN_180205c80 at 180205c80
 * undefined FUN_180205c80(void)
 * Address ranges: 180205c80-180205d3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180205c80(longlong *param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *extraout_x11;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = *(undefined8 *)(*param_1 + (ulonglong)param_2 * 0x28 + 0x20);
  FUN_18020d9f8(param_1[2],uVar4,0,1);
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar4);
  while( true ) {
    uVar1 = param_2 + 1;
    if (*(uint *)((longlong)param_1 + 0xc) <= uVar1) break;
    puVar2 = (undefined8 *)(*param_1 + (ulonglong)param_2 * 0x28);
    puVar3 = (undefined8 *)(*param_1 + (ulonglong)uVar1 * 0x28);
    uVar4 = *puVar3;
    uVar6 = puVar3[3];
    uVar5 = puVar3[2];
    puVar2[1] = puVar3[1];
    *puVar2 = uVar4;
    puVar2[3] = uVar6;
    puVar2[2] = uVar5;
    puVar2[4] = puVar3[4];
    param_2 = uVar1;
  }
  *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) - 1;
  return;
}

