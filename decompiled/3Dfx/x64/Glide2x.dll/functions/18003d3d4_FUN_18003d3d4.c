/*
 * FUN_18003d3d4 at 18003d3d4
 * undefined __fastcall FUN_18003d3d4(longlong param_1, uint * param_2, longlong * param_3, ushort param_4)
 * Address ranges: 18003d3d4-18003d635
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003d3d4(longlong param_1,uint *param_2,longlong *param_3,ushort param_4)

{
  uint *puVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar7;
  uint *puVar8;
  bool bVar9;
  uint *puVar10;
  ulonglong uVar6;
  
  iVar2 = *(int *)(param_1 + 0x78);
  if (iVar2 == 0) {
LAB_18003d5ae:
    uVar3 = 0;
    param_2[0x57] = 2;
    param_2[0x58] = 0x4001;
    param_2[0x5c] = 1;
    param_2[0x5b] = 1;
    param_2[0x5a] = 1;
    param_2[0x59] = 1;
    goto LAB_18003d5e1;
  }
  if (iVar2 == 1) {
    bVar9 = (param_4 & 0xff0) == 0x100;
LAB_18003d42b:
    if (bVar9) goto LAB_18003d5ae;
  }
  else {
    if (iVar2 == 4) {
      bVar9 = (param_4 & 0xdf0) == 0;
      goto LAB_18003d42b;
    }
    if (iVar2 == 7) {
      return;
    }
  }
  uVar3 = FUN_18003aa70((longlong)param_2,param_4,0,0,0,8,'\0');
  if ((param_4 & 0xf0) == 0) {
    uVar7 = param_4 | 0x2000;
  }
  else {
    FUN_18003c7fc((int *)param_2,param_3,param_4,0xff,uVar3,uVar3,8,0.01,'\0');
    uVar7 = uVar3;
  }
  iVar2 = *(int *)(param_1 + 0x78);
  if (iVar2 == 1) {
    uVar5 = 0x1d;
LAB_18003d4ef:
    bVar9 = true;
  }
  else {
    if (iVar2 == 2) {
      uVar5 = 0x39;
      goto LAB_18003d4ef;
    }
    if (iVar2 == 3) {
      uVar5 = 0x31;
    }
    else {
      if (iVar2 != 4) {
        if (iVar2 == 5) {
          uVar5 = 0x18;
        }
        else {
          if (iVar2 != 6) {
            uVar5 = 0;
            goto LAB_18003d4df;
          }
          uVar5 = 0x31;
        }
        goto LAB_18003d4ef;
      }
      uVar5 = 0x1d;
    }
LAB_18003d4df:
    bVar9 = false;
  }
  FUN_18003a434((longlong)param_2,uVar3,8);
  FUN_18003a558((int *)param_2,0,uVar7,0xff,0,'\0');
  uVar4 = FUN_180054318(param_2,param_2 + 0x60,(ulonglong)param_2[0x12],0xb4,0xff,0,0);
  puVar10 = param_2 + 0x57;
  puVar1 = param_2 + 0x5f;
  *puVar1 = uVar4;
  uVar5 = (*puVar10 + param_2[0x4f] + uVar4) * 0x1000000 + 0x1000000 & 0x7f000000 | uVar5;
  uVar6 = (ulonglong)uVar5;
  puVar8 = puVar1;
  if (bVar9) {
    puVar8 = puVar10;
    puVar10 = puVar1;
  }
  FUN_18005538c(param_3,uVar5,param_2 + 0x4f,puVar8,puVar10,(uint *)0x0);
  FUN_18003a9b8((longlong)param_2,uVar6,(uint)uVar3,CONCAT71((int7)((ulonglong)puVar8 >> 8),3));
LAB_18003d5e1:
  FUN_18005538c(param_3,param_2[0x57] * 0x1000000 + 0x1000000 & 0x7f000000 | 0x4000d,param_2 + 0x57,
                (uint *)0x0,(uint *)0x0,(uint *)0x0);
  FUN_18003ab80((longlong)param_2,uVar3);
  return;
}

