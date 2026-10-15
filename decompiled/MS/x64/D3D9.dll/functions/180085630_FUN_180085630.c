/*
 * FUN_180085630 at 180085630
 * undefined __fastcall FUN_180085630(undefined8 param_1, longlong param_2, longlong * param_3)
 * Address ranges: 180085630-18008575d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180085630(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  uint local_48;
  undefined1 local_44;
  undefined8 local_38;
  undefined8 uStack_30;
  
  iVar1 = *(int *)(param_2 + 0x484);
  if ((iVar1 == -1) || (iVar1 == 0)) {
    uVar2 = 0x36;
    if (*(uint *)(param_2 + 800) == *(uint *)(param_2 + 0x238)) {
      uVar2 = 0x1b;
    }
    FUN_180088378(param_1,param_2,param_3,uVar2 | *(uint *)(param_2 + 0x480),(uint *)(param_2 + 800)
                  ,(uint *)(param_2 + 0x3d0));
  }
  else {
    local_48 = *(uint *)(param_2 + 0x2c4);
    local_44 = (undefined1)((uint)iVar1 >> 0x10);
    local_38 = 0xffffffffffffffff;
    uStack_30 = 0xffffffffffffffff;
    FUN_1800ee208(0xe4,*(byte *)(param_2 + 0x324));
    FUN_180088378(param_1,param_2,param_3,*(uint *)(param_2 + 0x480) | 0x37,(uint *)(param_2 + 800),
                  &local_48);
  }
  *(undefined4 *)(param_2 + 0x484) = 0xffffffff;
  return;
}

