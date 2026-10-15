/*
 * FUN_10073c57 at 10073c57
 * uint __fastcall FUN_10073c57(int * param_1, uint * param_2, uint param_3, int param_4, uint * param_5)
 * Address ranges: 10073c57-10073db1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10073c57(int *param_1,uint *param_2,uint param_3,int param_4,uint *param_5)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint local_c;
  
  puVar2 = param_5;
  uVar1 = *param_2;
  if ((((*(char *)((int)param_2 + 5) == '\0') && (*(char *)((int)param_2 + 6) == '\0')) &&
      (*(char *)((int)param_2 + 7) == '\0')) && ((char)param_2[2] == '\0')) {
    if ((param_5 == (uint *)0x0) || (puVar3 = param_5, (uVar1 & 0xc00) != 0)) {
      puVar3 = (uint *)param_3;
    }
  }
  else {
    puVar3 = (uint *)FUN_100a05ed((int)(param_2 + 3),4,'\x01');
  }
  param_5 = param_2 + 3;
  local_c = 0;
  param_2[*(byte *)((int)param_2 + 0x61) + 0x1f] = 4;
  FUN_10073893(param_1,(int)param_2);
  if ((*param_2 & 0x400) != 0) {
    uVar4 = 0;
    if ((char)param_2[2] != '\0') {
      uVar4 = 2;
    }
    local_c = FUN_1007349d((int)param_2,(uint)puVar3,uVar4 | *(char *)((int)param_2 + 7) != '\0');
    param_2[*(byte *)((int)param_2 + 0x62) + 0x1f] = 4;
    FUN_10073893(param_1,(int)param_2);
  }
  if ((uint *)param_3 != puVar3) {
    FUN_100a068b((int)(param_2 + 3),param_3);
  }
  if (((uVar1 & 0xc00) != 0) &&
     ((FUN_100737f7(param_1,param_2,(uint)puVar3,local_c,param_4,0), (char)local_c != (char)puVar3
      || (((byte)(local_c >> 8) & 0x3f) != ((byte)((uint)puVar3 >> 8) & 0x3f))))) {
    FUN_100a068b((int)param_5,local_c);
  }
  if ((puVar2 != (uint *)0x0) && (puVar3 != puVar2)) {
    FUN_100a138c((int *)param_5,param_1,0x36);
    FUN_100a068b((int)param_5,(uint)puVar3);
    puVar3 = puVar2;
  }
  return (uint)puVar3;
}

