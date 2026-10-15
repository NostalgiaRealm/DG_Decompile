/*
 * FUN_1001362d at 1001362d
 * undefined2 __thiscall FUN_1001362d(void * this, int param_1, byte param_2, char param_3, byte param_4)
 * Address ranges: 1001362d-100136b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined2 __thiscall FUN_1001362d(void *this,int param_1,byte param_2,char param_3,byte param_4)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  uint uVar3;
  
  if ((*(char *)(param_1 + 0x48) == '\0') ||
     (*(char *)(*(int *)(*(int *)((int)this + 0x138) + 0x3684) * 0x18 + 0x531 +
               *(int *)(*(int *)((int)this + 0x138) + 0x3680)) == '\0')) {
    uVar1 = FUN_10010ce1(param_1,param_2,param_3,param_4);
  }
  else {
    uVar3 = (uint)(*(char *)(param_1 + 0x7d) != '\0') * 2 + 1 | (uint)param_2 << 2 |
            (uint)param_4 << 3;
    if (*(char *)(param_1 + 0x7f) != '\0') {
      uVar3 = param_2 ^ 1 | 0x10;
    }
    puVar2 = (undefined2 *)(&DAT_10059168 + uVar3 * 2);
    if (param_3 == '\0') {
      puVar2 = (undefined2 *)(&DAT_100591f4 + uVar3 * 2);
    }
    uVar1 = *puVar2;
  }
  return uVar1;
}

