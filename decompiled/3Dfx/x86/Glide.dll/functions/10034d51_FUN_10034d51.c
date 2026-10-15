/*
 * FUN_10034d51 at 10034d51
 * undefined __fastcall FUN_10034d51(int param_1, int * param_2, void * param_3, uint param_4)
 * Address ranges: 10034d51-10034f85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10034d51(int param_1,int *param_2,void *param_3,uint param_4)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  byte bVar10;
  char cVar11;
  int local_18;
  int local_14;
  int local_10;
  
  uVar6 = -(uint)(*(int *)(param_1 + 0x74) != 0) & 0x10;
  if (((*(int *)(&DAT_10058ea8 + uVar6) != 0xff) || (*(int *)(&DAT_10058eac + uVar6) != 0xff)) ||
     (*(int *)(&DAT_10058eb0 + uVar6) != 0xff)) {
    uVar4 = FUN_100304eb(param_2,param_4,0,0,0,0,7,param_3);
    uVar5 = uVar4 & 0xffff;
    uVar3 = (ushort)uVar4 & 0xf0;
    if ((uVar3 != 0x80) && (uVar3 != 0xf0)) {
      uVar5 = FUN_100303b9((int)param_2,0,0,0,0,7,'\0');
      uVar5 = uVar5 & 0xffff;
    }
    FUN_10032d30(param_2,param_3,param_4,0xa4,uVar5,uVar5,7,0.01,'\x01');
    FUN_1002ff4c((int)param_2,(ushort)uVar5,7);
    cVar11 = '\0';
    bVar10 = 0;
    bVar2 = FUN_10030494((int)param_2,uVar5,0xa4);
    FUN_1002fffc(param_2,0,uVar5,bVar2,bVar10,cVar11);
    bVar2 = 0;
    if (((byte)uVar5 & 0xf0) == 0x80) {
      bVar2 = (byte)((uint)param_2[(uVar5 & 0xf) + 0x24] >> 0x12) & 3;
    }
    if (bVar2 == 0) {
      iVar7 = 0;
      local_18 = *(int *)(&DAT_10058eb0 + uVar6);
      local_14 = *(int *)(&DAT_10058eac + uVar6);
      local_10 = *(int *)(&DAT_10058ea8 + uVar6);
    }
    else {
      local_10 = 0;
      iVar7 = *(int *)(&DAT_10058eb0 + uVar6);
      local_18 = *(int *)(&DAT_10058eac + uVar6);
      local_14 = *(int *)(&DAT_10058ea8 + uVar6);
    }
    piVar1 = param_2 + 0x5d;
    *piVar1 = 5;
    uVar6 = FUN_10048d34(4,0xe4,0,4,0,0,0);
    param_2[0x5e] = uVar6;
    piVar9 = param_2 + 0x55;
    param_2[0x5f] = local_10;
    param_2[0x62] = iVar7;
    param_2[0x60] = local_14;
    piVar8 = param_2 + 0x4d;
    param_2[0x61] = local_18;
    FUN_10048b6f(param_3,(*piVar8 + *piVar9) * 0x1000000 + 0x6000000U & 0x7f000000 | 1,piVar8,piVar9
                 ,piVar1,(int *)0x0);
    FUN_10048b6f(param_3,(*piVar9 + *piVar8) * 0x1000000 + 0x1000000U & 0x7f000000 | 0x56,piVar8,
                 piVar9,(int *)0x0,(int *)0x0);
    FUN_1002ff4c((int)param_2,0x70,7);
    FUN_1002fffc(param_2,0,uVar5,0xa4,0,'\0');
    FUN_10030335(piVar1,-0x5c,0x3b808081);
    FUN_10048b6f(param_3,(*piVar1 + *piVar9 + *piVar8) * 0x1000000 + 0x1000000U & 0x7f000000 |
                         0x2038,piVar8,piVar9,piVar1,(int *)0x0);
    if ((ushort)uVar5 != (ushort)param_4) {
      FUN_10030469((int)param_2,uVar5);
    }
  }
  return;
}

