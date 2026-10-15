/*
 * FUN_1800bcdf4 at 1800bcdf4
 * ulonglong __fastcall FUN_1800bcdf4(longlong param_1, int param_2, undefined8 * param_3)
 * Address ranges: 1800bcdf4-1800bd053
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800bcdf4(longlong param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  BOOL BVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar3 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
  }
  else {
    bVar3 = true;
    BVar4 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar4 == 0) {
      FUN_1800044dc(0);
    }
  }
  uVar10 = 0x8876086c;
  if (0xc < param_2) {
    if ((((param_2 != 0xd) && (param_2 != 0xe)) && (param_2 != 0xf)) &&
       (((param_2 != 0x10 && (param_2 != 0x11)) && (param_2 != 0x12)))) goto LAB_1800bd026;
LAB_1800bd021:
    uVar10 = 0x8876086a;
    goto LAB_1800bd026;
  }
  if (param_2 == 0xc) {
LAB_1800bce95:
    if (1 < param_2 - 0xbU) goto LAB_1800bd021;
  }
  else {
    if (((param_2 != 4) && (param_2 != 5)) &&
       (((param_2 != 6 && (((param_2 != 8 && (param_2 != 9)) && (param_2 != 10)))) &&
        (param_2 != 0xb)))) goto LAB_1800bd026;
    if (2 < param_2 - 8U) goto LAB_1800bce95;
  }
  uVar10 = 0;
  if (param_3 == (undefined8 *)0x0) goto LAB_1800bd026;
  uVar7 = *(undefined8 *)(param_1 + -0x5998);
  uVar10 = 0x8007000e;
  puVar5 = (undefined8 *)FUN_1800fbccc(0x48);
  if (puVar5 == (undefined8 *)0x0) goto LAB_1800bd026;
  puVar5[1] = 0;
  puVar5[2] = puVar5;
  *puVar5 = &PTR_FUN_1801048b8;
  puVar5[3] = param_1 + -0x6838;
  *(int *)(puVar5 + 4) = param_2;
  puVar5[5] = uVar7;
  puVar5[6] = 0;
  *(undefined2 *)(puVar5 + 8) = 1;
  puVar5[7] = 0;
  puVar5[7] = 0;
  lVar6 = (**(code **)(*(longlong *)puVar5[5] + 0x30))
                    ((longlong *)puVar5[5],*(undefined4 *)(puVar5 + 4));
  puVar5[6] = lVar6;
  if (lVar6 != 0) {
    iVar1 = *(int *)(param_1 + 0x154);
    if (*(int *)(param_1 + 0x150) == iVar1) {
      uVar9 = 0x10;
      if (iVar1 != 0) {
        uVar9 = (ulonglong)(uint)(iVar1 * 2);
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar9;
      uVar7 = SUB168(ZEXT816(8) * auVar2,0);
      if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
        uVar7 = 0xffffffffffffffff;
      }
      puVar8 = (undefined8 *)thunk_FUN_1800fbccc(uVar7);
      if (puVar8 != (undefined8 *)0x0) {
        FUN_1800fbec0(puVar8,*(undefined8 **)(param_1 + 0x148),
                      (ulonglong)*(uint *)(param_1 + 0x154) << 3);
        FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x148));
        *(undefined8 **)(param_1 + 0x148) = puVar8;
        *(int *)(param_1 + 0x154) = (int)uVar9;
        goto LAB_1800bcf9e;
      }
    }
    else {
LAB_1800bcf9e:
      *(undefined8 **)(*(longlong *)(param_1 + 0x148) + (ulonglong)*(uint *)(param_1 + 0x150) * 8) =
           puVar5;
      *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
      uVar9 = FUN_1800c07c4((longlong)puVar5,(longlong *)&DAT_1800fd730,param_3);
      uVar10 = uVar9 & 0xffffffff;
      if (-1 < (int)uVar9) goto LAB_1800bd026;
      FUN_1800b05e0(param_1 + -0x6838,(longlong)puVar5);
    }
    (**(code **)(*(longlong *)puVar5[6] + 8))();
    puVar5[6] = 0;
  }
  *puVar5 = &PTR_FUN_1801048b8;
  FUN_1800fbcf0(puVar5);
LAB_1800bd026:
  if (bVar3) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar10;
}

