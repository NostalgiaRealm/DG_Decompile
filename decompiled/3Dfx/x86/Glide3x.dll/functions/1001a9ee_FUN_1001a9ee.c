/*
 * FUN_1001a9ee at 1001a9ee
 * undefined4 __fastcall FUN_1001a9ee(void * param_1)
 * Address ranges: 1001a9ee-1001ab25
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1001a9ee(void *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  *(undefined4 *)((int)param_1 + 0x1dc) = 0;
  *(undefined4 *)((int)param_1 + 0x210) = 0;
  uVar2 = FUN_1001a4a2((int)param_1);
  if ((char)uVar2 != '\0') {
    iVar1 = *(int *)((int)param_1 + 0x1e8);
    puVar3 = FUN_1003b6a6(-(uint)(*(int *)(iVar1 + 0x3300) != 0) & *(int *)(iVar1 + 0x3300) + 0x520U
                          ,*(undefined4 *)(iVar1 + 0x3304),*(int *)(iVar1 + 0x3308) + 0x1370,
                          0x140000,0);
    *(undefined4 **)((int)param_1 + 0x208) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      iVar1 = *(int *)((int)param_1 + 0x1e8);
      puVar3 = FUN_1003b6a6(-(uint)(*(int *)(iVar1 + 0x3300) != 0) &
                            *(int *)(iVar1 + 0x3300) + 0x520U,*(undefined4 *)(iVar1 + 0x3304),
                            *(int *)(iVar1 + 0x3308) + 0x1370,0x10000,0);
      *(undefined4 **)((int)param_1 + 0x20c) = puVar3;
      if (puVar3 != (undefined4 *)0x0) {
        *(undefined4 *)((int)param_1 + 0xf0) = 0;
        *(undefined2 *)((int)param_1 + 0x1ac) = 0;
        *(undefined1 *)((int)param_1 + 0x1ae) = 0;
        *(undefined4 *)((int)param_1 + 0x1e0) = 0xffffffff;
        *(undefined4 *)(*(int *)((int)param_1 + 0x1e8) + 0x32a0) =
             *(undefined4 *)((int)param_1 + 0xe4);
        uVar4 = *(undefined4 *)(*(int *)((int)param_1 + 0x1e8) + 0x3300);
        *(undefined4 *)((int)param_1 + 0x220) =
             *(undefined4 *)(*(int *)((int)param_1 + 0x1e8) + 0x3308);
        *(undefined4 *)((int)param_1 + 0x21c) = uVar4;
        *(undefined1 *)((int)param_1 + 0x218) = 1;
        uVar4 = FUN_1001a6d7(param_1,1,1);
        return CONCAT31((int3)((uint)uVar4 >> 8),1);
      }
      puVar3 = *(undefined4 **)((int)param_1 + 0x208);
      if (puVar3 != (undefined4 *)0x0) {
        FUN_1003b621(puVar3);
        FUN_10052276(puVar3);
      }
      *(undefined4 *)((int)param_1 + 0x208) = 0;
    }
    uVar2 = FUN_1001a523((int)param_1);
  }
  return uVar2 & 0xffffff00;
}

