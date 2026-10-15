/*
 * FUN_1007e9fa at 1007e9fa
 * undefined __thiscall FUN_1007e9fa(void * this, int param_1, int param_2)
 * Address ranges: 1007e9fa-1007eaa1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1007e9fa(void *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint yBottom;
  LONG *pLVar5;
  LONG local_38 [4];
  tagRECT local_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  local_c = 1;
  uVar4 = -(uint)(param_1 != 0) & param_1 - 0xc0U;
  yBottom = *(uint *)(uVar4 + 0x18);
  uVar2 = -(uint)(param_2 != 0) & param_2 - 0xc0U;
  uVar4 = *(uint *)(uVar4 + 0x14);
  uVar1 = *(uint *)(uVar2 + 0x14);
  uVar2 = *(uint *)(uVar2 + 0x18);
  iVar3 = 8;
  local_18 = 0;
  if (uVar2 < yBottom) {
    yBottom = uVar2;
  }
  local_14 = 0;
  local_10 = 0;
  pLVar5 = local_38;
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pLVar5 = 0;
    pLVar5 = pLVar5 + 1;
  }
  if (uVar1 < uVar4) {
    uVar4 = uVar1;
  }
  SetRect(&local_28,0,0,uVar4,yBottom);
  local_38[0] = local_28.left;
  local_38[1] = local_28.top;
  local_38[2] = local_28.right;
  local_38[3] = local_28.bottom;
  FUN_1007ec4e(this,0,0,0,0,param_1,param_2,local_38);
  return;
}

