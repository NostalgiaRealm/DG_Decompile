/*
 * FUN_10021fa0 at 10021fa0
 * undefined __thiscall FUN_10021fa0(void * this, undefined4 * param_1)
 * Address ranges: 10021fa0-10022012
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10021fa0(void *this,undefined4 *param_1)

{
  longlong lVar1;
  SIZE_T SVar2;
  undefined4 *puVar3;
  
  if (((param_1 != (undefined4 *)0x0) && (*(char *)((int)this + 0x3d) == '\0')) &&
     ((*(int *)((int)this + 0x34) == 1 || (*(int *)((int)this + 0x34) == 2)))) {
    puVar3 = *(undefined4 **)((int)this + 0xc);
    if (puVar3 == (undefined4 *)0x0) {
      lVar1 = (ulonglong)(uint)(*(int *)((int)this + 0x24) * *(int *)((int)this + 0x20)) * 8;
      SVar2 = (SIZE_T)lVar1;
      if ((int)((ulonglong)lVar1 >> 0x20) != 0) {
        SVar2 = 0xffffffff;
      }
      puVar3 = (undefined4 *)FUN_10060bfe(SVar2);
      *(undefined4 **)((int)this + 0xc) = puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        return;
      }
    }
    FUN_10060d80(puVar3,param_1,*(int *)((int)this + 0x24) * *(int *)((int)this + 0x20) * 8);
    *(undefined1 *)((int)this + 0x3d) = 1;
  }
  return;
}

