/*
 * FUN_10004263 at 10004263
 * undefined __thiscall FUN_10004263(void * this, undefined4 param_1)
 * Address ranges: 10004263-10004319
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10004263(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  
  iVar2 = DAT_1006c210;
  iVar5 = (**(code **)(*(int *)this + 0x10))();
  piVar1 = (int *)(&DAT_1006c2b0)[iVar5 * 0x8a];
  if ((*(char *)(iVar2 + 0x7e6) == '\0') &&
     (bVar4 = FUN_10004193(this), *(byte *)(iVar2 + 0x56c) != (bVar4 ^ 1))) {
    FUN_100040b1(this,'\x01');
  }
  if (*(int *)(iVar2 + 0x76c) != *(int *)(iVar2 + 0x554)) {
    *(int *)((int)this + 8) = *(int *)(iVar2 + 0x554);
  }
  (**(code **)(*piVar1 + 0x10))(iVar2 + 0x54c,param_1);
  iVar3 = DAT_1006c210;
  *(uint *)((int)this + 0xc) = *(uint *)(DAT_1006c210 + 0x826) >> 2 & 1;
  *(uint *)((int)this + 0x10) = *(uint *)(iVar3 + 0x82a) & 1;
  FUN_1000310c(iVar5,*(uint *)(&DAT_1006c448 + iVar5 * 0x228),
               *(undefined4 *)(&DAT_1006c44c + iVar5 * 0x228));
  (**(code **)(*(int *)this + 0x34))();
  *(undefined1 *)(iVar2 + 0x759) = 0;
  return;
}

