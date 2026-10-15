/*
 * _guGammaCorrectionRGB@12 at 18000317c
 * undefined __fastcall _guGammaCorrectionRGB@12(float param_1, float param_2, float param_3)
 * Address ranges: 18000317c-1800031cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guGammaCorrectionRGB_12(float param_1,float param_2,float param_3)

{
  longlong *plVar1;
  undefined *puVar2;
  
                    /* 0x317c  100  _guGammaCorrectionRGB@12
                       0x317c  200  guGammaCorrectionRGB */
  puVar2 = FUN_1800069ac();
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    FUN_18000ada8((undefined4 *)(*(longlong *)(puVar2 + 0x18) + 0x11e8),param_1,param_2,param_3);
    plVar1 = *(longlong **)(puVar2 + 0x18);
    (**(code **)(*plVar1 + 0x68))(plVar1,plVar1 + 0x23d);
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

