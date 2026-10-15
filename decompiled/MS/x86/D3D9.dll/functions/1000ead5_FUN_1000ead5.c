/*
 * FUN_1000ead5 at 1000ead5
 * undefined __fastcall FUN_1000ead5(uint * param_1, int * param_2, uint param_3)
 * Address ranges: 1000ead5-1000ec15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000ead5(uint *param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 local_18;
  uint *local_10;
  int *local_c;
  
  local_10 = param_1;
  local_c = param_2;
  uVar8 = FUN_1000b651(param_1,param_2,*(ushort *)(param_3 + 0x12),0xe4,'\0',0,'\x01','\0');
  local_18._4_4_ = (undefined4)(uVar8 >> 0x20);
  local_18 = FUN_1000b9c3(param_1,-1,'\x01');
  uVar5 = (uint)local_18;
  FUN_10001877(local_c,uVar5,0x100700,0x5002,(uint)uVar8,0,0);
  piVar4 = local_c;
  uVar7 = param_3;
  FUN_10001877(local_c,uVar5,0x12010,0x208102,0xffffffff,0,
               1 << ((byte)*(undefined4 *)(param_3 + 0xc) & 3));
  puVar3 = local_10;
  FUN_1000ba3d((int)local_10,piVar4,(uint *)&local_18);
  FUN_1000f71e(puVar3,piVar4,'\0');
  FUN_10001877(piVar4,0xffffffff,0x30000,((*(char *)(uVar7 + 1) != '\0') + 4) * 0x100 | 0x7001,
               0xffffffff,0,0);
  iVar1 = piVar4[1];
  iVar2 = *local_c;
  FUN_10001877(local_c,0xffffffff,0x10000,0xe801,0xffffffff,0,0);
  iVar6 = FUN_1000e331((int)puVar3,(uint)*(ushort *)(uVar7 + 0x10));
  piVar4 = local_c;
  uVar7 = 0;
  if ((char)puVar3[0x7b] != '\0') {
    uVar7 = 0x80000000;
  }
  param_3 = local_c[1] - *local_c | uVar7;
  FUN_10003d8f((void *)(iVar6 + 4),&param_3);
  *(char *)(*piVar4 + -1 + (iVar1 - iVar2)) =
       ((char)piVar4[1] - (char)*piVar4) - (char)(iVar1 - iVar2);
  return;
}

