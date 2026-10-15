/*
 * FUN_1005cedf at 1005cedf
 * undefined __cdecl FUN_1005cedf(undefined4 param_1, int param_2, int * param_3, uint param_4, uint * param_5, uint * param_6)
 * Address ranges: 1005cedf-1005cfdd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl
FUN_1005cedf(undefined4 param_1,int param_2,int *param_3,uint param_4,uint *param_5,uint *param_6)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 extraout_ECX;
  int iVar6;
  undefined4 extraout_EDX;
  int *piVar7;
  uint local_70;
  undefined1 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint *local_50 [19];
  
  puVar3 = param_5;
  if (((*(char *)(param_2 + 100) == '\0') || ((param_4 & 0x2000) == 0)) ||
     ((*param_5 >> 0x1e & 1) == 0)) {
    FUN_100a13a5((int *)(param_2 + 0x18),param_3,param_4,(uint *)&param_5);
  }
  else {
    uVar2 = param_5[1];
    piVar1 = (int *)(param_2 + 0x18);
    local_70 = FUN_100a05ed((int)piVar1,4,'\0');
    local_60 = 0xffffffff;
    iVar6 = 1;
    local_5c = 0xffffffff;
    local_58 = 0xffffffff;
    local_54 = 0xffffffff;
    local_50[0] = &local_70;
    puVar5 = param_6;
    piVar7 = (int *)&stack0x0000001c;
    while (puVar5 != (uint *)0x0) {
      local_50[iVar6] = puVar5;
      iVar6 = iVar6 + 1;
      puVar5 = (uint *)*piVar7;
      piVar7 = piVar7 + 1;
    }
    local_50[iVar6] = (uint *)0x0;
    local_6c = (char)uVar2;
    FUN_100a13a5(piVar1,param_3,param_4,(uint *)local_50);
    uVar4 = FUN_100a1889(CONCAT31((int3)((uint)extraout_ECX >> 8),0xe4),
                         CONCAT31((int3)((uint)extraout_EDX >> 8),local_6c));
    local_6c = (undefined1)uVar4;
    local_50[1] = &local_70;
    local_50[0] = puVar3;
    local_50[2] = (uint *)0x0;
    FUN_100a13a5(piVar1,param_3,0x36,(uint *)local_50);
  }
  return;
}

