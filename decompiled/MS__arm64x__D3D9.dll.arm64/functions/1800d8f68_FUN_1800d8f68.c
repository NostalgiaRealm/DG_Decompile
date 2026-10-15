/*
 * FUN_1800d8f68 at 1800d8f68
 * undefined FUN_1800d8f68(void)
 * Address ranges: 1800d8f68-1800d9067
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800d8f68(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  char *pcVar4;
  uint uVar5;
  
  uVar5 = 0;
  iVar1 = (**(code **)(*(longlong *)*param_1 + 0x38))();
  if (iVar1 != 0) {
    do {
      uVar3 = (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1,param_2,uVar5);
      iVar1 = func_0x000180222cb8(uVar3,s_datafolderredirection_18023b020);
      if ((iVar1 == 0) &&
         (iVar1 = (**(code **)(*(longlong *)*param_1 + 0x48))((longlong *)*param_1,param_2,uVar5),
         iVar1 == 1)) {
        pcVar4 = (char *)(**(code **)(*(longlong *)*param_1 + 0x50))
                                   ((longlong *)*param_1,param_2,uVar5,0);
        if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
          (*__imp_KERNEL32_dll_MultiByteToWideChar)
                    (0,0,pcVar4,0xffffffff,param_1[1],*(undefined4 *)(param_1 + 2));
        }
        return 1;
      }
      uVar5 = uVar5 + 1;
      uVar2 = (**(code **)(*(longlong *)*param_1 + 0x38))((longlong *)*param_1,param_2);
    } while (uVar5 < uVar2);
  }
  return 0;
}

