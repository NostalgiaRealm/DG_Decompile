/*
 * FUN_10033568 at 10033568
 * undefined __thiscall FUN_10033568(void * this, char param_1)
 * Address ranges: 10033568-10033636
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10033568(void *this,char param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 4);
  uVar3 = *(uint *)((int)this + 0x1b8) >> 0xf;
  uVar2 = *(uint *)(iVar1 + 200);
  *(uint *)(iVar1 + 200) = (((uVar3 & 0xff) << 5 | uVar2) ^ uVar2) & 0x20 ^ uVar2;
  if ((*(char *)(*(int *)((int)this + 0xfc) + 0x151) == '\0') &&
     (*(char *)(DAT_1006c210 + 0x75d) == '\0')) {
    if ((((byte)uVar3 & *(char *)(DAT_1006c210 + 0x95b) == '\0') != 0) &&
       ((*(uint *)(*(int *)((int)this + 4) + 200) & 0x100) == 0)) {
      if (param_1 != '\0') {
        FUN_1003146f((int)this);
      }
      FUN_10033299(this,*(int *)(iVar1 + 0x6c),*(int *)(iVar1 + 0x70),0);
    }
  }
  else {
    if (param_1 != '\0') {
      FUN_1003146f((int)this);
    }
    FUN_10033299(this,*(int *)(iVar1 + 0x6c),*(int *)(iVar1 + 0x70),0);
    FUN_10033299(this,*(int *)(iVar1 + 0x6c),*(int *)(iVar1 + 0x70),0);
    if (*(char *)(DAT_1006c210 + 0x75f) != '\0') {
      DebugBreak();
    }
  }
  return;
}

