/*
 * FUN_1005d8db at 1005d8db
 * undefined4 __thiscall FUN_1005d8db(void * this, uint * param_1, short * param_2, uint param_3, int * param_4, undefined4 * param_5, undefined4 param_6, uint param_7)
 * Address ranges: 1005d8db-1005da5d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_1005d8db(void *this,uint *param_1,short *param_2,uint param_3,int *param_4,undefined4 *param_5,
            undefined4 param_6,uint param_7)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  uint local_580 [12];
  undefined1 *local_550;
  undefined2 local_54c;
  undefined4 local_548;
  int local_544 [29];
  undefined1 local_4d0 [1180];
  LPVOID local_34 [4];
  int local_24;
  undefined4 *local_20;
  int local_1c;
  
  FUN_100cfed0(local_544,0,0x504);
  local_548 = 0;
  FUN_100cfed0((int *)local_580,0,0x38);
  local_580[0] = param_3;
  local_550 = local_4d0;
  local_54c = 0x40;
  FUN_1005810d((int)local_580);
  FUN_10059d3c(param_1,(short *)local_580,param_2);
  FUN_1005a2a2((int)local_580,param_6,param_7);
  uVar2 = FUN_10058745(param_4,(int)local_580);
  if ((char)uVar2 != '\0') {
    FUN_10036e19(&local_20,0x200);
    local_24 = FUN_100c3e60((int *)&local_20,param_3);
    FUN_10036e19(local_34,0x80);
    uVar3 = FUN_1005d5d3(this,(int)param_1,local_580,(int *)&local_20,(int *)local_34,param_6,
                         param_7);
    if ((char)uVar3 != '\0') {
      FUN_100c3eb1((int *)&local_20,(int *)local_34,local_24);
      FUN_100c3d16(param_4,local_20,local_1c - (int)local_20);
      if (*(int *)((int)this + 8) != 0) {
        pbVar1 = (byte *)(((uint)(param_4[1] - *param_4) >> 1) + *param_4);
        *pbVar1 = *pbVar1 ^ 0x2a;
      }
      FUN_100c3dfb(param_4);
      FUN_100595cc((int)local_580,param_5);
      thunk_FUN_100cfd6c(local_34[0]);
      uVar3 = thunk_FUN_100cfd6c(local_20);
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
    thunk_FUN_100cfd6c(local_34[0]);
    uVar2 = thunk_FUN_100cfd6c(local_20);
  }
  return uVar2 & 0xffffff00;
}

