/*
 * FUN_18001d0ec at 18001d0ec
 * undefined __fastcall FUN_18001d0ec(longlong param_1, uint param_2, longlong param_3)
 * Address ranges: 18001d0ec-18001d1e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001d0ec(longlong param_1,uint param_2,longlong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_res10 [6];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  FUN_1800fa780(local_res10);
  puVar1 = (undefined8 *)((longlong)(int)param_2 * 0x40 + *(longlong *)(param_1 + 0xe10));
  uVar2 = 0;
  do {
    uVar3 = uVar2 * 4;
    uVar5 = 0;
    do {
      uVar4 = uVar5 * 4;
      uVar5 = uVar5 + 1;
      *(float *)((longlong)&local_78 + (ulonglong)(uVar4 + uVar2) * 4) =
           *(float *)(param_3 + (ulonglong)(uVar3 + 1) * 4) *
           *(float *)((longlong)puVar1 + (ulonglong)(uVar4 + 1) * 4) +
           *(float *)(param_3 + (ulonglong)uVar3 * 4) *
           *(float *)((longlong)puVar1 + (ulonglong)uVar4 * 4) +
           *(float *)(param_3 + (ulonglong)(uVar3 + 2) * 4) *
           *(float *)((longlong)puVar1 + (ulonglong)(uVar4 + 2) * 4) +
           *(float *)(param_3 + (ulonglong)(uVar3 + 3) * 4) *
           *(float *)((longlong)puVar1 + (ulonglong)(uVar4 + 3) * 4);
    } while (uVar5 < 4);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  *puVar1 = local_78;
  puVar1[1] = uStack_70;
  puVar1[2] = local_68;
  puVar1[3] = uStack_60;
  puVar1[4] = local_58;
  puVar1[5] = uStack_50;
  puVar1[6] = local_48;
  puVar1[7] = uStack_40;
  FUN_18001ce18(param_1,param_2);
  FUN_1800fa7bc();
  return;
}

