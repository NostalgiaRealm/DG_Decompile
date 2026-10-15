/*
 * FUN_100271ee at 100271ee
 * undefined4 __fastcall FUN_100271ee(void * param_1)
 * Address ranges: 100271ee-100272ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_100271ee(void *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  *(undefined4 *)((int)param_1 + 0x30) = 0;
  *(undefined4 *)((int)param_1 + 0x5c) = 0;
  uVar2 = FUN_10026e26((int)param_1);
  if ((char)uVar2 != '\0') {
    iVar1 = *(int *)((int)param_1 + 0x3c);
    puVar3 = FUN_10038bc1(-(uint)(*(int *)(iVar1 + 0x3180) != 0) & *(int *)(iVar1 + 0x3180) + 0x520U
                          ,*(undefined4 *)(iVar1 + 0x3184),*(int *)(iVar1 + 0x3188) + 0x1370,0xf0000
                          ,0);
    *(undefined4 **)((int)param_1 + 0x54) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      iVar1 = *(int *)((int)param_1 + 0x3c);
      puVar3 = FUN_10038bc1(-(uint)(*(int *)(iVar1 + 0x3180) != 0) &
                            *(int *)(iVar1 + 0x3180) + 0x520U,*(undefined4 *)(iVar1 + 0x3184),
                            *(int *)(iVar1 + 0x3188) + 0x1370,0x10000,0);
      *(undefined4 **)((int)param_1 + 0x58) = puVar3;
      if (puVar3 != (undefined4 *)0x0) {
        uVar4 = *(undefined4 *)(*(int *)((int)param_1 + 0x3c) + 0x3180);
        *(undefined4 *)((int)param_1 + 0x6c) =
             *(undefined4 *)(*(int *)((int)param_1 + 0x3c) + 0x3188);
        *(undefined4 *)((int)param_1 + 0x68) = uVar4;
        *(undefined1 *)((int)param_1 + 100) = 1;
        uVar4 = FUN_10026f8e(param_1,1,1);
        return CONCAT31((int3)((uint)uVar4 >> 8),1);
      }
      puVar3 = *(undefined4 **)((int)param_1 + 0x54);
      if (puVar3 != (undefined4 *)0x0) {
        FUN_10038b3c(puVar3);
        FUN_1004f626(puVar3);
      }
      *(undefined4 *)((int)param_1 + 0x54) = 0;
    }
    uVar2 = FUN_10026e9b((int)param_1);
  }
  return uVar2 & 0xffffff00;
}

