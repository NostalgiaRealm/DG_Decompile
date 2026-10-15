/*
 * FUN_100057de at 100057de
 * byte __thiscall FUN_100057de(void * this, int * param_1, undefined4 param_2)
 * Address ranges: 100057de-100058d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __thiscall FUN_100057de(void *this,int *param_1,undefined4 param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  SIZE_T SVar6;
  undefined4 *puVar7;
  byte bVar8;
  uint uVar9;
  
  uVar3 = (**(code **)(*param_1 + 0x28))(&DAT_1005d0b0);
  uVar9 = 0;
  while( true ) {
    if (uVar3 <= uVar9) {
      uVar3 = 0;
      bVar8 = 1;
      while( true ) {
        if (*(uint *)((int)this + 4) <= uVar3) {
          return bVar8;
        }
        bVar2 = (**(code **)**(undefined4 **)(*(int *)this + uVar3 * 4))(param_2);
        bVar8 = bVar8 & bVar2;
        if (bVar8 == 0) break;
        uVar3 = uVar3 + 1;
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        (**(code **)(**(int **)(*(int *)this + -4 + uVar3 * 4) + 4))(param_2);
      }
      thunk_FUN_1005c76c(*(LPVOID *)this);
      *(undefined4 *)this = 0;
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
      return 0;
    }
    iVar4 = (**(code **)(*param_1 + 0x2c))(&DAT_1005d0b0,uVar9);
    if (iVar4 == 0) break;
    iVar1 = *(int *)((int)this + 8);
    if (*(int *)((int)this + 4) == iVar1) {
      if (iVar1 == 0) {
        uVar5 = 0x10;
      }
      else {
        uVar5 = iVar1 * 2;
      }
      SVar6 = (SIZE_T)((ulonglong)uVar5 * 4);
      if ((int)((ulonglong)uVar5 * 4 >> 0x20) != 0) {
        SVar6 = 0xffffffff;
      }
      puVar7 = (undefined4 *)FUN_1005c789(SVar6);
      if (puVar7 == (undefined4 *)0x0) {
        return 0;
      }
      FUN_1005ca00(puVar7,*(undefined4 **)this,*(int *)((int)this + 8) << 2);
      thunk_FUN_1005c76c(*(LPVOID *)this);
      *(undefined4 **)this = puVar7;
      *(uint *)((int)this + 8) = uVar5;
    }
    *(int *)(*(int *)this + *(int *)((int)this + 4) * 4) = iVar4;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    uVar9 = uVar9 + 1;
  }
  return 0;
}

