/*
 * FUN_1800b41d0 at 1800b41d0
 * undefined4 __fastcall FUN_1800b41d0(longlong param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 1800b41d0-1800b42f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800b41d0(longlong param_1,uint param_2,undefined4 *param_3)

{
  bool bVar1;
  BOOL BVar2;
  undefined4 uVar3;
  uint local_res8 [8];
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  uVar3 = 0x8876086c;
  if (param_3 != (undefined4 *)0x0) {
    if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
      bVar1 = false;
    }
    else {
      bVar1 = true;
      BVar2 = TryEnterCriticalSection(DAT_1801123a8);
      if (BVar2 == 0) {
        FUN_1800044dc(0);
      }
    }
    FUN_1800fa780(local_res8);
    local_a4 = *(undefined8 *)(param_3 + 1);
    uStack_9c = *(undefined8 *)(param_3 + 3);
    local_a8 = *param_3;
    local_94 = *(undefined8 *)(param_3 + 5);
    uStack_8c = *(undefined8 *)(param_3 + 7);
    local_6c = param_3[0xf];
    local_84 = *(undefined8 *)(param_3 + 9);
    uStack_7c = *(undefined8 *)(param_3 + 0xb);
    local_60 = param_3[0x12];
    local_74 = *(undefined8 *)(param_3 + 0xd);
    local_68 = *(undefined8 *)(param_3 + 0x10);
    local_5c = *(undefined8 *)(param_3 + 0x13);
    uStack_54 = *(undefined8 *)(param_3 + 0x15);
    local_48 = param_3[0x18];
    local_4c = param_3[0x17];
    local_44 = param_3[0x19];
    FUN_18001d1ec(param_1 + -0x6838,param_2,(undefined8 *)&local_a8);
    uVar3 = 0;
    FUN_1800fa7bc();
    if (bVar1) {
      LeaveCriticalSection(DAT_1801123a8);
      uVar3 = 0;
    }
    else {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
    }
  }
  return uVar3;
}

