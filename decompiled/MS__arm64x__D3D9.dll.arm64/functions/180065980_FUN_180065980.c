/*
 * FUN_180065980 at 180065980
 * undefined FUN_180065980(void)
 * Address ranges: 180065980-180065a5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180065980(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_2 + 0x310) == 0) {
    uVar2 = FUN_1800f42d0(param_2,4,1);
    *(undefined4 *)(param_2 + 0x310) = uVar2;
    uVar1 = FUN_1800f5ea8(0xe4,*(undefined1 *)(*(longlong *)(param_2 + 0x100) + 0x144));
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = 0;
    FUN_1800f5730(param_2,param_3,0);
    FUN_1800f5730(param_2,param_3,0x38,*(undefined4 *)(param_2 + 0x310),
                  *(undefined1 *)(*(longlong *)(param_2 + 0x100) + 0x144),
                  *(undefined4 *)(param_2 + 0x310),uVar1,*(undefined4 *)(param_2 + 0x68),0xe4,0x4c0,
                  0,uVar2,uVar3,uVar4);
  }
  return *(undefined4 *)(param_2 + 0x310);
}

