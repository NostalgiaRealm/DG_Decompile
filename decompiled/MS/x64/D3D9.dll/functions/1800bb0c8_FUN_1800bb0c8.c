/*
 * FUN_1800bb0c8 at 1800bb0c8
 * ulonglong __fastcall FUN_1800bb0c8(longlong param_1, uint * param_2, undefined8 * param_3)
 * Address ranges: 1800bb0c8-1800bb34a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1800bb0c8(longlong param_1,uint *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  byte bVar5;
  BOOL BVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  byte *pbVar15;
  uint local_res10 [6];
  undefined8 local_12b8 [590];
  undefined8 uStack_48;
  
  uStack_48 = 0x1800bb0df;
  pbVar15 = (byte *)0x0;
  uVar14 = 0x8876086c;
  if (param_2 == (uint *)0x0) {
    return 0x8876086c;
  }
  if (param_3 == (undefined8 *)0x0) {
    return 0x8876086c;
  }
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar4 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
  }
  else {
    bVar4 = true;
    BVar6 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar6 == 0) {
      FUN_1800044dc(0);
    }
  }
  uVar1 = *param_2;
  if (((uVar1 + 0xff00 < 5) || (uVar1 + 0xfe00 < 2)) || (uVar1 == 0xffff0300)) {
    lVar9 = *(longlong *)(param_1 + 0x60);
    local_res10[0] = 0;
    uVar2 = *(uint *)(lVar9 + 0xcc);
    if (uVar2 < uVar1) {
      uVar13 = 0x7fffffff;
    }
    else {
      uVar13 = *(uint *)(lVar9 + 300);
      pbVar15 = (byte *)(lVar9 + 0x108);
    }
    uVar12 = uVar1 >> 8 & 0xff;
    if (uVar12 == 1) {
      bVar5 = FUN_180019290((int *)param_2,local_12b8,local_res10);
    }
    else if (uVar12 == 2) {
      bVar5 = FUN_1800c44e0(param_2,pbVar15,(undefined1 *)local_12b8,local_res10);
    }
    else {
      if (uVar12 != 3) goto LAB_1800bb315;
      uVar7 = FUN_1800c5758((int *)param_2,uVar13,(undefined1 *)local_12b8,local_res10);
      bVar5 = (byte)uVar7;
    }
    if (((bVar5 != 0) && (uVar1 <= uVar2)) &&
       (puVar8 = (undefined8 *)FUN_1800fbccc(0x38), puVar8 != (undefined8 *)0x0)) {
      puVar8[1] = 0;
      puVar8[2] = puVar8;
      puVar8[4] = 0;
      *puVar8 = &PTR_FUN_180104890;
      *(undefined4 *)(puVar8 + 5) = 0;
      puVar8[3] = param_1 + -0x6838;
      puVar8[6] = 0;
      lVar9 = FUN_1800befb4(param_1 + 0xd8,(ulonglong)puVar8,(byte *)param_2,local_res10[0],
                            local_12b8);
      uVar1 = local_res10[0];
      if (lVar9 != 0) {
        uVar11 = CONCAT44(0,local_res10[0]);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar11;
        uVar7 = SUB168(ZEXT816(4) * auVar3,0);
        if (SUB168(ZEXT816(4) * auVar3,8) != 0) {
          uVar7 = 0xffffffffffffffff;
        }
        puVar10 = (undefined8 *)thunk_FUN_1800fbccc(uVar7);
        if (puVar10 != (undefined8 *)0x0) {
          puVar8[4] = lVar9;
          puVar8[6] = puVar10;
          FUN_1800fbec0(puVar10,(undefined8 *)param_2,uVar11 * 4);
          *(uint *)(puVar8 + 5) = uVar1;
          uVar11 = FUN_1800c0600((longlong)puVar8,(longlong *)&DAT_1800fd710,param_3);
          uVar14 = uVar11 & 0xffffffff;
          if (-1 < (int)uVar11) goto LAB_1800bb315;
          FUN_1800fbcf0((LPVOID)puVar8[6]);
          puVar8[6] = 0;
          *(undefined4 *)(puVar8 + 5) = 0;
        }
      }
      *puVar8 = &PTR_FUN_180104890;
      FUN_1800fbcf0(puVar8);
    }
  }
LAB_1800bb315:
  if (bVar4) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar14;
}

