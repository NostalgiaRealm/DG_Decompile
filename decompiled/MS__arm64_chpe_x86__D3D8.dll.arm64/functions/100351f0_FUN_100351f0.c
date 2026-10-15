/*
 * FUN_100351f0 at 100351f0
 * undefined FUN_100351f0(void)
 * Address ranges: 100351f0-100353c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100351f0(int param_1,int param_2,int param_3,undefined8 param_4,char param_5)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  cVar4 = *(char *)(DAT_1013ceec + 0x7ec);
  bVar5 = true;
  iVar7 = (uint)*(ushort *)(param_1 + 0xc) * *(int *)(param_1 + 0x14);
  iVar6 = iVar7 + param_3 * 2;
  if (param_2 == 0) {
    iVar6 = (*(code *)PTR_FUN_10134128)(0,iVar6,0x3000,4);
  }
  else {
    iVar6 = (*(code *)PTR_FUN_101340d4)(param_2,0xf001f,0,0,iVar6);
  }
  if (iVar6 == 0) {
    uVar8 = *(uint *)(param_1 + 0x34);
  }
  else {
    *(int *)(param_1 + 0x20) = iVar6 + param_3;
    if (param_2 == 0) {
      FUN_100ff690(iVar6 + param_3,0,iVar7);
    }
    iVar6 = *(int *)(param_1 + 0x20);
    bVar5 = iVar6 != 0;
    if ((cVar4 != '\0') && (param_5 != '\0')) {
      piVar1 = (int *)(param_1 + 0x2c);
      iVar7 = ((uint)*(ushort *)(param_1 + 0xc) * *(int *)(param_1 + 0x14) + 0xfff >> 0xf) + 1;
      *piVar1 = iVar7;
      iVar7 = FUN_100fece0(iVar7);
      piVar2 = (int *)(param_1 + 0x24);
      *piVar2 = iVar7;
      if (iVar7 != 0) {
        iVar7 = FUN_100fece0(*piVar1);
        *(int *)(param_1 + 0x28) = iVar7;
        if (iVar7 == 0) {
          FUN_100fed00(*piVar2);
          *piVar2 = 0;
        }
        else {
          FUN_100ff690(*piVar2,0,*piVar1);
          FUN_100ff690(*(int *)(param_1 + 0x28),0,*piVar1);
        }
      }
      FUN_100354a0(param_1,0,0);
    }
    puVar3 = (uint *)(param_1 + 0x34);
    *puVar3 = *puVar3 & 0xffffffe7;
    FUN_100317f0(param_1);
    uVar8 = *puVar3;
    if (iVar6 == 0) {
      uVar8 = uVar8 & 0xffffffdf;
      goto LAB_100353a0;
    }
  }
  uVar8 = uVar8 | 0x20;
LAB_100353a0:
  *(uint *)(param_1 + 0x34) = uVar8;
  return bVar5;
}

