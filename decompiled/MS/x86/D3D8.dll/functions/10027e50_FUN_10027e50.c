/*
 * FUN_10027e50 at 10027e50
 * undefined4 __thiscall FUN_10027e50(void * this, int param_1)
 * Address ranges: 10027e50-10027eaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10027e50(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint local_20 [7];
  
  local_20[1] = 2;
  local_20[0] = param_1 + 0xfU & 0xfffffff0;
  local_20[2] = 4;
  local_20[3] = 0x10000;
  local_20[4] = 0;
  param_1 = 0;
  local_20[5] = local_20[0];
  iVar1 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0xd9b4) + 0xc))
                    ((int *)**(undefined4 **)((int)this + 0xd9b4),local_20,0,&param_1);
  iVar2 = 0;
  if (-1 < iVar1) {
    iVar2 = param_1;
  }
  return iVar2;
}

