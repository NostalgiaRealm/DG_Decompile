/*
 * FUN_1001d470 at 1001d470
 * undefined __thiscall FUN_1001d470(void * this, uint param_1, char param_2)
 * Address ranges: 1001d470-1001d51f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001d470(void *this,uint param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_10;
  undefined3 local_c;
  
  uVar3 = param_1;
  uVar4 = (int)param_1 >> 0x1f;
  uVar2 = FUN_10023740((void *)((int)this + 0x1ec0),param_1,uVar4);
  if ((((uVar2 != *(uint *)((int)this + 0x1ec8)) &&
       (iVar1 = *(int *)((int)this + 0x1ec4), *(uint *)(iVar1 + uVar2 * 0x18) == uVar3)) &&
      (*(uint *)(iVar1 + 4 + uVar2 * 0x18) == uVar4)) &&
     (iVar1 = iVar1 + 0xc + uVar2 * 0x18, iVar1 != 0)) {
    uVar3 = 0;
    do {
      if (*(char *)(iVar1 + 1 + uVar3) == '\0') {
        *(char *)(iVar1 + uVar3 + 1) = param_2 + '\x01';
        *(undefined1 *)(iVar1 + 6) = 1;
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 2);
    *(undefined1 *)(iVar1 + 6) = 1;
    return;
  }
  local_10 = (uint)(byte)(param_2 + 1) << 8;
  local_c = 0x10100;
  FUN_100235a0((void *)((int)this + 0x1ec0),&param_1,&local_10);
  return;
}

