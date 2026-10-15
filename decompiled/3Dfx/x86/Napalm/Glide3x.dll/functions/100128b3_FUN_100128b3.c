/*
 * FUN_100128b3 at 100128b3
 * undefined1 __thiscall FUN_100128b3(void * this, uint param_1, int param_2, undefined1 param_3, LONG param_4, LONG param_5, LONG param_6, LONG param_7, undefined4 param_8)
 * Address ranges: 100128b3-100129a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall
FUN_100128b3(void *this,uint param_1,int param_2,undefined1 param_3,LONG param_4,LONG param_5,
            LONG param_6,LONG param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else if (param_2 == 1) {
    iVar3 = 1;
  }
  else if (param_2 == 2) {
    iVar3 = 2;
  }
  else {
    if (param_2 == 6) {
      iVar3 = *(int *)(*(int *)((int)this + 0x365c) + 0x128);
      *(undefined4 *)(*(int *)((int)this + 0x365c) + 0x128) = 0xffffffff;
    }
    else {
      if (param_2 != 7) {
        return 0;
      }
      iVar3 = *(int *)(*(int *)((int)this + 0x365c) + 300);
      *(undefined4 *)(*(int *)((int)this + 0x365c) + 300) = 0xffffffff;
    }
    if (iVar3 == -1) {
      return 0;
    }
  }
  (**(code **)(*(int *)this + 0x1a4))();
  uVar1 = FUN_10011ec7(this,param_1 & 1,iVar3,param_3,param_4,param_5,param_6,param_7,param_8);
  if ((char)uVar1 != '\0') {
    if (2 < iVar3) {
      FUN_10011993(*(void **)((int)this + 0x365c),iVar3,*(uint *)((int)this + 0x2b5c),
                   *(uint *)((int)this + 0x2b60),*(int *)((int)this + 0x2b64),'\x01');
      FUN_10011993(*(void **)((int)this + 0x365c),iVar3,*(uint *)((int)this + 0x2b70),
                   *(uint *)((int)this + 0x2b74),*(int *)((int)this + 0x2b78),'\x01');
    }
    uVar2 = 1;
  }
  (**(code **)(*(int *)this + 0x1a8))();
  return uVar2;
}

