/*
 * FUN_18002f604 at 18002f604
 * undefined8 __fastcall FUN_18002f604(undefined8 param_1, uint param_2, undefined4 param_3)
 * Address ranges: 18002f604-18002f6fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18002f604(undefined8 param_1,uint param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint local_68 [6];
  uint local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar8 = (ulonglong)param_2;
  lVar7 = uVar8 * 600;
  uVar4 = (**(code **)(*(longlong *)(&DAT_1801128e0)[uVar8 * 0x4b] + 0x90))
                    ((longlong *)(&DAT_1801128e0)[uVar8 * 0x4b],&local_50);
  if ((local_50 == 0) || (local_4c == 0)) {
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  else {
    puVar5 = FUN_18002f91c(local_68,&local_50,(ulonglong)param_2);
    lVar3 = DAT_180111f20;
    uVar2 = *(undefined8 *)(puVar5 + 2);
    uVar1 = *(undefined8 *)(puVar5 + 4);
    *(undefined8 *)(&DAT_180112a8c + lVar7) = *(undefined8 *)puVar5;
    *(undefined8 *)(lVar7 + 0x180112a94) = uVar2;
    *(uint *)(&DAT_180112a70 + uVar8 * 0x4b) = local_50;
    *(int *)((longlong)&DAT_180112a70 + lVar7 + 4) = local_4c;
    *(undefined8 *)(&DAT_180112a9c + lVar7) = uVar1;
    *(undefined4 *)(&DAT_180112a78 + uVar8 * 0x4b) = local_48;
    *(undefined4 *)((longlong)&DAT_180112a78 + lVar7 + 4) = uStack_44;
    *(undefined4 *)(&DAT_180112a80 + uVar8 * 0x4b) = uStack_40;
    *(undefined4 *)((longlong)&DAT_180112a80 + lVar7 + 4) = uStack_3c;
    (&DAT_180112a88)[uVar8 * 0x96] = 0x2a;
    if (*(int *)(lVar3 + 0x89a) != 0) {
      *(int *)((longlong)&DAT_180112a80 + lVar7 + 4) = *(int *)(lVar3 + 0x89a);
    }
    puVar6 = (undefined8 *)
             (**(code **)(*(longlong *)(&DAT_1801128e0)[uVar8 * 0x4b] + 0x88))
                       ((longlong *)(&DAT_1801128e0)[uVar8 * 0x4b],local_68,param_3);
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    (&DAT_180112aee)[lVar7] = 0;
    uVar4 = CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
    *(undefined8 *)(&DAT_180112ab4 + lVar7) = uVar1;
    *(undefined8 *)(lVar7 + 0x180112abc) = uVar2;
  }
  return uVar4;
}

