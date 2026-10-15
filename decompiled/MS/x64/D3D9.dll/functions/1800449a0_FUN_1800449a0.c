/*
 * FUN_1800449a0 at 1800449a0
 * bool __fastcall FUN_1800449a0(longlong param_1, uint param_2, undefined8 param_3, char param_4)
 * Address ranges: 1800449a0-180044ecf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800449a0(longlong param_1,uint param_2,undefined8 param_3,char param_4)

{
  bool bVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 uVar8;
  byte bVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined4 in_stack_ffffffffffffffb0;
  longlong local_38 [6];
  
  bVar15 = true;
  if ((*(char *)(param_1 + 0xf688) == '\0') && (param_4 == '\0')) {
    return true;
  }
  bVar9 = 1;
  if (*(char *)(param_1 + 0x7662) == '\0') {
    lVar5 = *(longlong *)(param_1 + 0xf7e0);
    bVar1 = true;
    if (lVar5 != 0) {
      if ((*(int *)(param_1 + 0x7650) == 0) || (*(int *)(param_1 + 0x1012c) != 0)) {
        bVar1 = false;
      }
      uVar11 = 0xdfffffffffffffff;
      if ((*(uint *)(*(longlong *)(lVar5 + 8) + 0x1214) & *(uint *)(param_1 + 0x7594)) == 0) {
        uVar11 = 0x9fffffffffffffff;
      }
      uVar11 = uVar11 & *(ulonglong *)(param_1 + 0xfe0);
      if (*(char *)(param_1 + 0x765e) == '\0') {
        uVar3 = 7;
      }
      else {
        uVar3 = uVar11 >> 0x34;
      }
      uVar3 = (uVar3 << 0x34 ^ uVar11) & 0xff8fffffffffffff ^ uVar3 << 0x34;
      uVar11 = uVar3 >> 0x38;
      if (!bVar1) {
        uVar11 = 0;
      }
      uVar3 = (uVar3 ^ uVar11 << 0x38) & 0xfeffffffffffffff ^ uVar11 << 0x38;
      uVar11 = uVar3 >> 0x39;
      if (*(char *)(*(longlong *)(lVar5 + 8) + 0x126d) == '\x03') {
        uVar11 = 0;
      }
      uVar3 = (uVar3 ^ uVar11 << 0x39) & 0xfdffffffffffffff ^ uVar11 << 0x39;
      uVar11 = uVar3 >> 0x3c;
      if (*(char *)(param_1 + 0x766e) == '\0') {
        uVar11 = 0;
      }
      uVar3 = (uVar3 ^ uVar11 << 0x3c) & 0xefffffffffffffff ^ uVar11 << 0x3c;
      uVar11 = uVar3 & 0xf3ffffffffffffff;
      if (((byte)(uVar3 >> 0x39) & 1) != 0) {
        uVar11 = uVar3;
      }
      plVar4 = FUN_180056048((undefined8 *)(lVar5 + 0x10),local_38,uVar11,
                             *(ulonglong *)(param_1 + 0xea0));
      lVar5 = *plVar4;
      lVar7 = plVar4[1];
      bVar15 = lVar5 != 0;
      iVar13 = (int)plVar4[2];
      iVar12 = *(int *)((longlong)plVar4 + 0x14);
      uVar14 = *(uint *)(plVar4 + 3);
      uVar16 = *(undefined8 *)((longlong)plVar4 + 0x1c);
      uVar10 = *(undefined4 *)((longlong)plVar4 + 0x24);
      uVar6 = *(uint *)(plVar4 + 5);
      uVar2 = *(undefined4 *)((longlong)plVar4 + 0x2c);
      goto LAB_180044e08;
    }
    lVar5 = 0x10154;
    if (*(longlong *)(param_1 + 0xf910) == 0) {
      lVar5 = 0x1012c;
    }
    if ((*(int *)(param_1 + 0x7650) == 0) || (*(int *)(lVar5 + param_1) != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    uVar11 = 0xdfffffffffffffff;
    if ((*(uint *)(param_1 + 0x7594) & (1 << ((byte)param_2 & 0x1f)) - 1U) == 0) {
      uVar11 = 0x9fffffffffffffff;
    }
    uVar11 = uVar11 & *(ulonglong *)(param_1 + 0xfe0);
    if (*(char *)(param_1 + 0x765e) == '\0') {
      uVar3 = 7;
    }
    else {
      uVar3 = uVar11 >> 0x34;
    }
    uVar3 = (uVar11 ^ uVar3 << 0x34) & 0xff8fffffffffffff ^ uVar3 << 0x34;
    uVar11 = uVar3 >> 0x38;
    if (!bVar1) {
      uVar11 = 0;
    }
    uVar3 = (uVar11 << 0x38 ^ uVar3) & 0xfeffffffffffffff ^ uVar11 << 0x38;
    uVar11 = uVar3 & 0xfe00000000000000;
    uVar11 = (uVar11 ^ uVar3) & 0xfdffffffffffffff ^ uVar11;
    uVar3 = uVar11 >> 0x3c;
    if (*(char *)(param_1 + 0x766e) == '\0') {
      uVar3 = 0;
    }
    uVar3 = (uVar3 << 0x3c ^ uVar11) & 0xefffffffffffffff ^ uVar3 << 0x3c;
    uVar11 = uVar3 & 0xf3ffffffffffffff;
    if (((byte)(uVar3 >> 0x39) & 1) != 0) {
      uVar11 = uVar3;
    }
    if ((*(longlong *)(param_1 + 0xf8f0) == *(longlong *)(*(longlong *)(param_1 + 0xf6f8) + 0xc0))
       || (*(longlong *)(param_1 + 0xf8f0) == *(longlong *)(*(longlong *)(param_1 + 0xf6f8) + 0x100)
          )) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    plVar4 = FUN_1800562dc((longlong *)(param_1 + 0xf748),local_38,(uint *)(param_1 + 0xf18),uVar11,
                           param_2,CONCAT31((int3)((uint)in_stack_ffffffffffffffb0 >> 8),uVar8),
                           *(undefined1 *)(param_1 + 0xab));
    lVar5 = *plVar4;
    lVar7 = plVar4[1];
    uVar16 = *(undefined8 *)((longlong)plVar4 + 0x1c);
    uVar10 = *(undefined4 *)((longlong)plVar4 + 0x24);
    uVar2 = *(undefined4 *)((longlong)plVar4 + 0x2c);
    if (lVar5 != 0) {
      iVar13 = (int)plVar4[2];
      iVar12 = *(int *)((longlong)plVar4 + 0x14);
      uVar14 = *(uint *)(plVar4 + 3);
      uVar6 = *(uint *)(plVar4 + 5);
      goto LAB_180044e08;
    }
  }
  if (*(char *)(param_1 + 0x7662) == '\0') {
    lVar5 = *(longlong *)(param_1 + 0xf6f8);
    uVar14 = 4;
    if (param_2 < 5) {
      uVar14 = param_2;
    }
    if ((*(longlong *)(param_1 + 0xf8f0) != *(longlong *)(lVar5 + 0xc0)) &&
       (*(longlong *)(param_1 + 0xf8f0) != *(longlong *)(lVar5 + 0x100))) {
      bVar9 = 0;
    }
    if (*(char *)(param_1 + 0x7660) == '\0') {
      uVar6 = -(uint)bVar9 & 10;
    }
    else {
      uVar6 = 5;
    }
    uVar11 = (ulonglong)(*(int *)(&DAT_1801017c0 + (ulonglong)uVar14 * 4) + uVar6);
    lVar5 = *(longlong *)(lVar5 + 8 + uVar11 * 8);
    lVar7 = *(longlong *)(&DAT_1800fe370 + uVar11 * 0x28);
    iVar13 = *(int *)(&DAT_1800fe378 + uVar11 * 0x28);
    iVar12 = *(int *)(&DAT_1800fe37c + uVar11 * 0x28);
    uVar14 = *(uint *)(&DAT_1800fe380 + uVar11 * 0x28);
    uVar16 = *(undefined8 *)(&DAT_1800fe384 + uVar11 * 0x28);
    uVar10 = *(undefined4 *)(&DAT_1800fe38c + uVar11 * 0x28);
    uVar6 = *(uint *)(&DAT_1800fe390 + uVar11 * 0x28);
    uVar2 = *(undefined4 *)(&DAT_1800fe394 + uVar11 * 0x28);
  }
  else {
    if (((*(longlong *)(param_1 + 0xfcc8) == 0) && (*(longlong *)(param_1 + 0xfcd0) == 0)) &&
       (*(longlong *)(param_1 + 0xfcd8) == 0)) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xf6f8) + 0x80);
    }
    else {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xf6f8) + 0x90);
    }
    uVar10 = 0;
    uVar16 = 0;
    lVar7 = 1;
    iVar13 = 0;
    uVar6 = 0;
    iVar12 = 0;
    uVar14 = 0;
    uVar2 = 0;
  }
LAB_180044e08:
  *(undefined1 *)(param_1 + 0xf688) = 0;
  if (*(longlong *)(param_1 + 0xf8f8) != lVar5) {
    *(longlong *)(param_1 + 0xf8f8) = lVar5;
    *(byte *)(param_1 + 0x1018c) =
         *(byte *)(param_1 + 0x1018c) | *(uint *)(param_1 + 0x10178) < uVar6;
    *(byte *)(param_1 + 0x10190) =
         *(byte *)(param_1 + 0x10190) | *(uint *)(param_1 + 0x10168) < uVar14;
    if ((iVar13 == 0) || (*(int *)(param_1 + 0x10160) != 0)) {
      bVar9 = 0;
    }
    else {
      bVar9 = 1;
    }
    if ((iVar12 != 0) && (*(int *)(param_1 + 0x10164) == 0)) {
      bVar9 = 1;
    }
    *(byte *)(param_1 + 0x10192) = *(byte *)(param_1 + 0x10192) | bVar9;
    *(undefined8 *)(param_1 + 0x1016c) = uVar16;
    *(undefined4 *)(param_1 + 0x10174) = uVar10;
    *(longlong *)(param_1 + 0x10158) = lVar7;
    *(int *)(param_1 + 0x10160) = iVar13;
    *(int *)(param_1 + 0x10164) = iVar12;
    *(uint *)(param_1 + 0x10168) = uVar14;
    *(uint *)(param_1 + 0x10178) = uVar6;
    *(undefined4 *)(param_1 + 0x1017c) = uVar2;
    *(undefined1 *)(param_1 + 0x10189) = 1;
  }
  return bVar15;
}

