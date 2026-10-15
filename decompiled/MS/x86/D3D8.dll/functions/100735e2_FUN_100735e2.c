/*
 * FUN_100735e2 at 100735e2
 * undefined __fastcall FUN_100735e2(int * param_1, uint * param_2, int param_3)
 * Address ranges: 100735e2-100737f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100735e2(int *param_1,uint *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = *param_2 >> 10 & 1;
  bVar1 = 0;
  if (*(char *)((int)param_2 + uVar2 * 2 + 6) != '\0') {
    bVar1 = 2;
  }
  bVar1 = bVar1 | *(char *)((int)param_2 + uVar2 * 2 + 5) != '\0';
  if ((bVar1 == 1) || (bVar1 == 2)) {
    FUN_100a05ed((int)(param_2 + 3),1,'\0');
    if (param_3 != 0) {
      FUN_100a138c((int *)(param_2 + 3),param_1,0x1d);
      FUN_100a138c((int *)(param_2 + 3),param_1,0x3c);
    }
    FUN_100a138c((int *)(param_2 + 3),param_1,1);
  }
  else if (bVar1 == 3) {
    FUN_100a05ed((int)(param_2 + 3),2,'\0');
    if (param_3 != 0) {
      FUN_100a138c((int *)(param_2 + 3),param_1,0x1d);
      FUN_100a138c((int *)(param_2 + 3),param_1,0x3c);
      FUN_100a138c((int *)(param_2 + 3),param_1,0x3c);
    }
    FUN_100a138c((int *)(param_2 + 3),param_1,1);
    FUN_100a138c((int *)(param_2 + 3),param_1,1);
  }
  FUN_100a138c((int *)(param_2 + 3),param_1,~(*param_2 << 6) & 0x40000 | 0xd);
  return;
}

