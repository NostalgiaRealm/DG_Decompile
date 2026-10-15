/*
 * FUN_1001cb97 at 1001cb97
 * undefined4 __fastcall FUN_1001cb97(void * param_1)
 * Address ranges: 1001cb97-1001ccce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1001cb97(void *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  *(undefined4 *)((int)param_1 + 0x1dc) = 0;
  *(undefined4 *)((int)param_1 + 0x210) = 0;
  uVar2 = FUN_1001c64b((int)param_1);
  if ((char)uVar2 != '\0') {
    iVar1 = *(int *)((int)param_1 + 0x1e8);
    puVar3 = FUN_1003eab4(-(uint)(*(int *)(iVar1 + 0x3680) != 0) & *(int *)(iVar1 + 0x3680) + 0x520U
                          ,*(undefined4 *)(iVar1 + 0x3684),*(int *)(iVar1 + 0x3688) + 0x1370,
                          0x140000,0);
    *(undefined4 **)((int)param_1 + 0x208) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      iVar1 = *(int *)((int)param_1 + 0x1e8);
      puVar3 = FUN_1003eab4(-(uint)(*(int *)(iVar1 + 0x3680) != 0) &
                            *(int *)(iVar1 + 0x3680) + 0x520U,*(undefined4 *)(iVar1 + 0x3684),
                            *(int *)(iVar1 + 0x3688) + 0x1370,0x10000,0);
      *(undefined4 **)((int)param_1 + 0x20c) = puVar3;
      if (puVar3 != (undefined4 *)0x0) {
        *(undefined4 *)((int)param_1 + 0xf0) = 0;
        *(undefined2 *)((int)param_1 + 0x1ac) = 0;
        *(undefined1 *)((int)param_1 + 0x1ae) = 0;
        *(undefined4 *)((int)param_1 + 0x1e0) = 0xffffffff;
        *(undefined4 *)(*(int *)((int)param_1 + 0x1e8) + 0x3620) =
             *(undefined4 *)((int)param_1 + 0xe4);
        uVar4 = *(undefined4 *)(*(int *)((int)param_1 + 0x1e8) + 0x3680);
        *(undefined4 *)((int)param_1 + 0x220) =
             *(undefined4 *)(*(int *)((int)param_1 + 0x1e8) + 0x3688);
        *(undefined4 *)((int)param_1 + 0x21c) = uVar4;
        *(undefined1 *)((int)param_1 + 0x218) = 1;
        uVar4 = FUN_1001c880(param_1,1,1);
        return CONCAT31((int3)((uint)uVar4 >> 8),1);
      }
      puVar3 = *(undefined4 **)((int)param_1 + 0x208);
      if (puVar3 != (undefined4 *)0x0) {
        FUN_1003ea2f(puVar3);
        FUN_10055686(puVar3);
      }
      *(undefined4 *)((int)param_1 + 0x208) = 0;
    }
    uVar2 = FUN_1001c6cc((int)param_1);
  }
  return uVar2 & 0xffffff00;
}

