/*
 * FUN_1004b86d at 1004b86d
 * undefined __cdecl FUN_1004b86d(undefined4 * param_1)
 * Address ranges: 1004b86d-1004b8c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1004b86d(undefined4 *param_1)

{
  void *this;
  
  this = (void *)*param_1;
  if ((((param_1[1] != *(int *)((int)this + 0xe40)) || (param_1[2] != *(int *)((int)this + 0xe44)))
      || (param_1[3] != *(int *)((int)this + 0xe48))) || (param_1[4] != *(int *)((int)this + 0xe4c))
     ) {
    FUN_10042220(this,0,0,0);
    *(int *)((int)this + 0xe40) = param_1[1];
    *(undefined4 *)((int)this + 0xe44) = param_1[2];
    *(undefined4 *)((int)this + 0xe48) = param_1[3];
    *(undefined4 *)((int)this + 0xe4c) = param_1[4];
    *(undefined1 *)((int)this + 0xf6a1) = 1;
  }
  return;
}

