/*
 * FUN_140005b28 at 140005b28
 * undefined8 __cdecl FUN_140005b28(longlong param_1, int param_2)
 * Address ranges: 140005b28-140005b2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140005b28(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_2 == 0x403) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    uVar1 = *(uint *)(lVar2 + 0xc2) ^ 1;
  }
  else if (param_2 == 0x404) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    uVar1 = *(uint *)(lVar2 + 0xc2) ^ 2;
  }
  else {
    if (param_2 != 0x405) {
      if (param_2 == 0x406) {
        *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc6) =
             *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc6) ^ 1;
      }
      else {
        if (param_2 == 0x407) {
          *(byte *)(*(longlong *)(param_1 + 0x10) + 0xe6) =
               *(byte *)(*(longlong *)(param_1 + 0x10) + 0xe6) ^ 1;
        }
        else {
          if (param_2 == 0x408) {
            lVar2 = *(longlong *)(param_1 + 0x10);
            uVar1 = *(uint *)(lVar2 + 0xe2) ^ 1;
          }
          else {
            if (param_2 != 0x409) goto LAB_140005bfc;
            lVar2 = *(longlong *)(param_1 + 0x10);
            uVar1 = *(uint *)(lVar2 + 0xe2) ^ 2;
          }
          *(uint *)(lVar2 + 0xe2) = uVar1;
        }
        (**(code **)**(undefined8 **)(param_1 + 0x18))();
      }
      goto LAB_140005bfc;
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    uVar1 = *(uint *)(lVar2 + 0xc2) ^ 4;
  }
  *(uint *)(lVar2 + 0xc2) = uVar1;
LAB_140005bfc:
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),1);
  return 1;
}

