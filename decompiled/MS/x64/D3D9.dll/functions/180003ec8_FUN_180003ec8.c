/*
 * FUN_180003ec8 at 180003ec8
 * undefined8 __fastcall FUN_180003ec8(longlong param_1, uint param_2, char * param_3)
 * Address ranges: 180003ec8-18000419a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180003ec8(longlong param_1,uint param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  lVar3 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x68) + (ulonglong)param_2 * 4) * 600;
  FUN_1800fbea0(param_3,0,0x200);
  FUN_1800fbea0(param_3 + 0x200,0,0x200);
  lVar4 = (ulonglong)*(uint *)(param_1 + 0x10) * 0x1b0;
  pcVar8 = (&PTR_s_dgvdsvga_dll_18010e490)[(ulonglong)*(uint *)(param_1 + 0x10) * 0x36];
  iVar7 = *(int *)(&DAT_18010e478 + lVar4);
  iVar6 = *(int *)(&DAT_18010e47c + lVar4);
  iVar11 = *(int *)(&DAT_18010e480 + lVar4);
  iVar12 = *(int *)(&DAT_18010e484 + lVar4);
  uVar13 = *(undefined4 *)(&DAT_18010e498 + lVar4);
  uVar14 = *(undefined4 *)(lVar4 + 0x18010e49c);
  uVar15 = *(undefined4 *)(lVar4 + 0x18010e4a0);
  uVar16 = *(undefined4 *)(lVar4 + 0x18010e4a4);
  uVar9 = *(undefined4 *)(&DAT_18010e48c + lVar4);
  uVar10 = *(undefined4 *)(&DAT_18010e488 + lVar4);
  uVar5 = (uint)(byte)(&DAT_18010e4a8)[lVar4];
  if ((*(int *)(DAT_180111f20 + 0x858) != 0) && (*(int *)(DAT_180111f20 + 0x858) != 1))
  goto LAB_180004079;
  iVar1 = *(int *)(DAT_180111f20 + 0x8f7);
  if (iVar1 == 1) {
    uVar13 = 0xd7b71e3e;
    uVar14 = 0x11cf5f43;
    uVar15 = 0x17142f71;
    uVar16 = 0x35d4c21b;
    pcVar8 = "nvldumd.dll";
    iVar7 = 0x10de;
    iVar6 = 0x1c03;
    iVar11 = 0x371a1458;
    iVar12 = 0xa1;
    uVar9 = 0x190015;
    uVar10 = 0xe06c7;
LAB_18000403b:
    uVar5 = 1;
  }
  else {
    if (iVar1 == 2) {
      uVar13 = 0xa864e434;
      uVar14 = 0x464d354d;
      uVar15 = 0xd2a94581;
      uVar16 = 0xa19de4e5;
      pcVar8 = "atiumdag.dll";
      iVar7 = 0x1002;
      iVar6 = 0x67df;
      iVar11 = 0x1002e366;
      iVar12 = 0xe7;
      uVar9 = 0x180121;
      uVar10 = 0xe04e0;
      goto LAB_18000403b;
    }
    uVar5 = (uint)(byte)(&DAT_18010e4a8)[lVar4];
    if (iVar1 == 3) {
      uVar13 = 0xd7b78e66;
      uVar14 = 0x11cf5a52;
      uVar15 = 0x59135c6f;
      uVar16 = 0x35d5c2bd;
      pcVar8 = "igdumdim32.dll";
      iVar7 = 0x8086;
      iVar6 = 0x1912;
      iVar12 = 6;
      iVar11 = 0x79771462;
      uVar9 = 0x180014;
      uVar10 = 0x64188e;
      goto LAB_18000403b;
    }
  }
  iVar1 = *(int *)(DAT_180111f20 + 0x8fb);
  if (*(int *)(DAT_180111f20 + 0x8fb) == -1) {
    iVar1 = iVar7;
  }
  iVar7 = iVar1;
  iVar1 = *(int *)(DAT_180111f20 + 0x8ff);
  if (*(int *)(DAT_180111f20 + 0x8ff) == -1) {
    iVar1 = iVar6;
  }
  iVar6 = iVar1;
  iVar1 = *(int *)(DAT_180111f20 + 0x903);
  if (*(int *)(DAT_180111f20 + 0x903) == -1) {
    iVar1 = iVar11;
  }
  iVar11 = iVar1;
  if (*(int *)(DAT_180111f20 + 0x907) != -1) {
    iVar12 = *(int *)(DAT_180111f20 + 0x907);
  }
LAB_180004079:
  FUN_1800fc54c(param_3,pcVar8);
  uVar2 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)(&DAT_180112908 + lVar3),-1,param_3 + 0x200,0x200,
                              (LPCSTR)0x0,(LPBOOL)0x0);
  if (0x18 < 0x1ff - uVar2) {
    builtin_strncpy(param_3 + (ulonglong)uVar2 + 0x1ff," (dgVoodoo DX AP",0x10);
    builtin_strncpy(param_3 + (ulonglong)uVar2 + 0x208,"o DX API Layer)",0x10);
  }
  WideCharToMultiByte(0xfde9,0,(LPCWSTR)(&DAT_180112948 + lVar3),-1,param_3 + 0x400,0x200,
                      (LPCSTR)0x0,(LPBOOL)0x0);
  *(undefined4 *)(param_3 + 0x438) = uVar13;
  *(undefined4 *)(param_3 + 0x43c) = uVar14;
  *(undefined4 *)(param_3 + 0x440) = uVar15;
  *(undefined4 *)(param_3 + 0x444) = uVar16;
  *(int *)(param_3 + 0x428) = iVar7;
  *(int *)(param_3 + 0x42c) = iVar6;
  *(int *)(param_3 + 0x430) = iVar11;
  *(int *)(param_3 + 0x434) = iVar12;
  *(undefined4 *)(param_3 + 0x420) = uVar10;
  *(undefined4 *)(param_3 + 0x424) = uVar9;
  *(uint *)(param_3 + 0x448) = uVar5;
  return 0;
}

