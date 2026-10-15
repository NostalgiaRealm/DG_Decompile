/*
 * FUN_1800aeba0 at 1800aeba0
 * undefined FUN_1800aeba0(void)
 * Address ranges: 1800aeba0-1800aee8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800aeba0(longlong param_1,uint param_2,longlong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_3 == 0) {
    return 0x8876086c;
  }
  if (param_2 - 2 < 2) {
LAB_1800aebfc:
    param_2 = *(uint *)(&DAT_180229b50 + (longlong)(int)param_2 * 4);
  }
  else {
    if ((7 < param_2 - 0x10) && (0xff < param_2 - 0x100)) {
      return 0x8876086c;
    }
    if (param_2 < 0x18) goto LAB_1800aebfc;
    param_2 = param_2 - 0xf6;
  }
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar3 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar3 = true;
    iVar4 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar4 == 0) {
      FUN_180003398();
    }
  }
  uVar10 = 1;
  uVar7 = 0;
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + -0x5a28) + (longlong)(int)param_2 * 0x40);
  do {
    uVar9 = uVar7 * 4;
    fVar12 = *(float *)(param_3 + (ulonglong)uVar9 * 4);
    fVar14 = *(float *)(param_3 + (ulonglong)(uVar9 + 3) * 4);
    fVar13 = *(float *)(param_3 + (ulonglong)(uVar9 + 2) * 4);
    fVar11 = *(float *)(param_3 + (ulonglong)(uVar9 + 1) * 4);
    uVar9 = 0;
    do {
      uVar2 = uVar9 * 4;
      uVar9 = uVar9 + 1;
      *(float *)((longlong)&local_80 + (ulonglong)(uVar2 + uVar7) * 4) =
           *(float *)((longlong)puVar1 + (ulonglong)(uVar2 + 1) * 4) * fVar11 +
           *(float *)((longlong)puVar1 + (ulonglong)uVar2 * 4) * fVar12 +
           *(float *)((longlong)puVar1 + (ulonglong)(uVar2 + 2) * 4) * fVar13 +
           *(float *)((longlong)puVar1 + (ulonglong)(uVar2 + 3) * 4) * fVar14;
    } while (uVar9 < 4);
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  puVar1[1] = uStack_78;
  *puVar1 = local_80;
  puVar1[3] = uStack_68;
  puVar1[2] = uStack_70;
  puVar1[5] = uStack_58;
  puVar1[4] = local_60;
  puVar1[7] = uStack_48;
  puVar1[6] = uStack_50;
  if (9 < (int)param_2) {
    uVar7 = param_2 - 10;
    uVar8 = (ulonglong)(uVar7 >> 3) & 7;
    lVar6 = param_1 + ((ulonglong)(uVar7 >> 6) - 0xb69) * 8;
    *(byte *)(lVar6 + uVar8) =
         *(byte *)(lVar6 + uVar8) & ((byte)(1 << ((ulonglong)uVar7 & 7)) ^ 0xff);
  }
  if (param_2 == 1) {
    uVar5 = FUN_18001ef50(*(longlong *)(param_1 + -0x5a28) + 0x40,&local_80,param_1 + -0x5ab0);
    (**(code **)(**(longlong **)(param_1 + -0x6810) + 0xa8))
              (*(longlong **)(param_1 + -0x6810),1,uVar5);
    lVar6 = *(longlong *)(param_1 + -0x5a28);
    if ((((*(float *)(lVar6 + 0x70) == 0.0) && (*(float *)(lVar6 + 0x74) == 0.0)) &&
        (*(float *)(lVar6 + 0x78) == 0.0)) && (*(float *)(lVar6 + 0x7c) == 1.0)) {
      uVar10 = 0;
    }
    *(undefined1 *)(param_1 + -0x642b) = uVar10;
    *(undefined1 *)(param_1 + -0x5b55) = 0;
    lVar6 = -0x5b57;
LAB_1800aee38:
    *(undefined2 *)(param_1 + lVar6) = 0;
    lVar6 = -0x5b52;
  }
  else {
    uVar8 = (ulonglong)(param_2 >> 3) & 7;
    lVar6 = param_1 + ((ulonglong)(param_2 >> 6) - 0xb63) * 8;
    *(byte *)(lVar6 + uVar8) = *(byte *)(lVar6 + uVar8) | (byte)(1 << ((ulonglong)param_2 & 7));
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + -0x5b58) = 0;
      lVar6 = -0x5b54;
      goto LAB_1800aee38;
    }
    if (param_2 != 10) goto LAB_1800aee4c;
    *(undefined1 *)(param_1 + -0x5b58) = 0;
    *(undefined2 *)(param_1 + -0x5b56) = 0;
    *(undefined1 *)(param_1 + -0x5b52) = 0;
    lVar6 = -0x6427;
  }
  *(undefined1 *)(param_1 + lVar6) = 0;
  *(undefined1 *)(param_1 + -0x5b50) = 0;
LAB_1800aee4c:
  if (bVar3) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return 0;
}

