/*
 * FUN_1800bb90c at 1800bb90c
 * int __fastcall FUN_1800bb90c(longlong param_1, uint param_2, uint param_3, uint param_4, uint param_5, undefined8 * param_6, longlong param_7)
 * Address ranges: 1800bb90c-1800bbc57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800bb90c(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                 undefined8 *param_6,longlong param_7)

{
  bool bVar1;
  undefined1 uVar2;
  byte bVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_res8;
  uint local_298 [3];
  uint local_28c;
  
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar1 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
  }
  else {
    bVar1 = true;
    BVar4 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar4 == 0) {
      FUN_1800044dc(0);
    }
  }
  uVar10 = 0;
  uVar11 = 0;
  local_res8 = 0;
  iVar5 = FUN_180002a0c(*(longlong *)(param_1 + -0x5a10),*(uint *)(param_1 + -0x5990),
                        *(int *)(param_1 + -0x59d0),*(int *)(param_1 + -0x59b0),param_5,param_3,6,
                        100,0);
  uVar12 = 0x10;
  if ((((-1 < iVar5) && (iVar5 = -0x7789f794, param_2 != 0)) && (param_6 != (undefined8 *)0x0)) &&
     (((param_3 & 0x10) == 0 || ((*(byte *)(param_1 + -0x59c0) & 0x40) == 0)))) {
    *param_6 = 0;
    local_res8 = 0;
    uVar11 = uVar10;
    if ((param_5 == 0) &&
       ((*(int *)(param_1 + -0x59d0) == 1 &&
        (local_res8 = param_2,
        *(ulonglong *)(&DAT_180112b00 + (ulonglong)*(uint *)(param_1 + -0x5990) * 600) <
        (ulonglong)param_2)))) {
      iVar5 = -0x7789fe84;
    }
    else {
      iVar5 = 0;
      if ((param_4 != 0) &&
         ((bVar3 = FUN_18008879c(param_4,'\x01',local_298), bVar3 != 0 &&
          (uVar11 = local_28c, param_2 < local_28c)))) {
        iVar5 = -0x7789f794;
      }
    }
  }
  iVar6 = -0x7789f794;
  if ((param_7 != 0) || (iVar6 = iVar5, iVar5 < 0)) goto LAB_1800bbc19;
  iVar6 = -0x7ff8fff2;
  if ((*(int *)(param_1 + -0x59d0) == 3) || ((*(byte *)(param_1 + -0x59c0) & 0x20) != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  puVar7 = FUN_1800ad004(param_1 + -0x6838,*(undefined8 *)(param_1 + -0x5998),param_2,param_3,
                         param_4,uVar11,param_5,uVar2);
  if (puVar7 == (undefined8 *)0x0) goto LAB_1800bbc19;
  uVar8 = FUN_1800180ec((longlong)puVar7);
  if ((char)uVar8 != '\0') {
    iVar5 = *(int *)(param_1 + -0x592c);
    if (*(int *)(param_1 + -0x5930) == iVar5) {
      if (iVar5 != 0) {
        uVar12 = iVar5 * 2;
      }
      uVar8 = SUB168(ZEXT816(8) * ZEXT416(uVar12),0);
      if (SUB168(ZEXT816(8) * ZEXT416(uVar12),8) != 0) {
        uVar8 = 0xffffffffffffffff;
      }
      puVar9 = (undefined8 *)thunk_FUN_1800fbccc(uVar8);
      if (puVar9 != (undefined8 *)0x0) {
        FUN_1800fbec0(puVar9,*(undefined8 **)(param_1 + -0x5938),
                      (ulonglong)*(uint *)(param_1 + -0x592c) << 3);
        FUN_1800fbcf0(*(LPVOID *)(param_1 + -0x5938));
        *(undefined8 **)(param_1 + -0x5938) = puVar9;
        *(uint *)(param_1 + -0x592c) = uVar12;
        goto LAB_1800bbb90;
      }
    }
    else {
LAB_1800bbb90:
      *(undefined8 **)
       (*(longlong *)(param_1 + -0x5938) + (ulonglong)*(uint *)(param_1 + -0x5930) * 8) = puVar7;
      *(int *)(param_1 + -0x5930) = *(int *)(param_1 + -0x5930) + 1;
      uVar8 = FUN_1800c2a0c((longlong)(puVar7 + 0x12),(longlong *)&DAT_1800fd6a0,param_6);
      iVar6 = (int)uVar8;
      if (-1 < iVar6) {
        *(ulonglong *)(&DAT_180112b00 + (ulonglong)*(uint *)(param_1 + -0x5990) * 600) =
             *(longlong *)(&DAT_180112b00 + (ulonglong)*(uint *)(param_1 + -0x5990) * 600) -
             (ulonglong)local_res8;
        goto LAB_1800bbc19;
      }
      FUN_180007df4(param_1 + -0x6838,(longlong)puVar7);
    }
    FUN_180018190((longlong)puVar7);
  }
  FUN_1800c298c(puVar7);
  FUN_1800fbcf0(puVar7);
LAB_1800bbc19:
  if (bVar1) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return iVar6;
}

