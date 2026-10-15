/*
 * FUN_1800bae48 at 1800bae48
 * ulonglong __fastcall FUN_1800bae48(longlong param_1, uint * param_2, undefined8 * param_3)
 * Address ranges: 1800bae48-1800bb0c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1800bae48(longlong param_1,uint *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  BOOL BVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint local_res10 [2];
  undefined8 local_4a98 [2381];
  undefined8 uStack_30;
  
  uStack_30 = 0x1800bae64;
  uVar11 = 0x8876086c;
  if (param_2 == (uint *)0x0) {
    return 0x8876086c;
  }
  if (param_3 == (undefined8 *)0x0) {
    return 0x8876086c;
  }
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar3 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
  }
  else {
    bVar3 = true;
    BVar5 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar5 == 0) {
      FUN_1800044dc(0);
    }
  }
  uVar1 = *param_2;
  if (((uVar1 + 0x1ff00 < 2) || (uVar1 + 0x1fe00 < 2)) || (uVar1 == 0xfffe0300)) {
    FUN_1800fbea0((undefined1 *)local_4a98,0,0x4a70);
    local_res10[0] = 0;
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
    if (uVar2 < uVar1) {
      uVar9 = 0x7fffffff;
    }
    else {
      uVar9 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x60) + 0x128);
    }
    uVar10 = uVar1 >> 8 & 0xff;
    if (uVar10 == 1) {
      cVar4 = FUN_18001aa8c((int *)param_2,(short)*(undefined4 *)(param_1 + -0x59bc),uVar9,
                            (undefined1 *)local_4a98,local_res10);
    }
    else if (uVar10 == 2) {
      uVar6 = FUN_1800c74ec(param_2,(short)*(undefined4 *)(param_1 + -0x59bc),
                            (undefined1 *)local_4a98,local_res10);
      cVar4 = (char)uVar6;
    }
    else {
      if (uVar10 != 3) goto LAB_1800bb088;
      cVar4 = FUN_1800c8760((int *)param_2,(short)*(undefined4 *)(param_1 + -0x59bc),(uint)uVar9,
                            local_4a98,local_res10);
    }
    if (((cVar4 != '\0') && (uVar1 <= uVar2)) &&
       (puVar7 = (undefined8 *)FUN_1800fbccc(0x30), puVar7 != (undefined8 *)0x0)) {
      puVar7[1] = 0;
      puVar7[2] = puVar7;
      puVar7[3] = param_1 + -0x6838;
      *puVar7 = &PTR_FUN_180104cf8;
      puVar7[4] = 0;
      *(undefined4 *)(puVar7 + 5) = 0;
      lVar8 = FUN_1800bea24(param_1 + 0x80,(ulonglong)puVar7,(byte *)param_2,local_res10[0],
                            local_4a98);
      if (lVar8 != 0) {
        uVar6 = *(undefined8 *)(lVar8 + 0x868);
        *(uint *)(puVar7 + 5) = local_res10[0];
        puVar7[4] = uVar6;
        uVar9 = FUN_1800c31bc((longlong)puVar7,(longlong *)&DAT_1800fd700,param_3);
        uVar11 = uVar9 & 0xffffffff;
        if (-1 < (int)uVar9) goto LAB_1800bb088;
        puVar7[4] = 0;
        *(undefined4 *)(puVar7 + 5) = 0;
      }
      *puVar7 = &PTR_FUN_180104cf8;
      FUN_1800fbcf0(puVar7);
    }
  }
LAB_1800bb088:
  if (bVar3) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar11;
}

