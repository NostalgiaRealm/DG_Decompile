/*
 * _guTexSource@4 at 180003234
 * undefined __fastcall _guTexSource@4(uint param_1)
 * Address ranges: 180003234-1800033ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guTexSource_4(uint param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  longlong lVar5;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  
                    /* 0x3234  137  _guTexSource@4
                       0x3234  294  guTexSource */
  puVar4 = FUN_180015044();
  if (puVar4[100] != '\0') {
    LOCK();
    *(int *)(puVar4 + 0x60) = *(int *)(puVar4 + 0x60) + 1;
    UNLOCK();
    lVar3 = *(longlong *)(puVar4 + 0xa0);
    if (((lVar3 != 0) && (param_1 != 0xffffffff)) && (param_1 < *(uint *)(puVar4 + 0xa8))) {
      lVar5 = (ulonglong)param_1 * 0xd0;
      iVar2 = *(int *)(lVar5 + 0x4c + lVar3);
      if (iVar2 < *(int *)(*(longlong *)(puVar4 + 0x30) + 0x833)) {
        if (puVar4[100] != '\0') {
          LOCK();
          *(int *)(puVar4 + 0x60) = *(int *)(puVar4 + 0x60) + 1;
          UNLOCK();
          (**(code **)(**(longlong **)(puVar4 + 0x18) + 0x30))();
          LOCK();
          *(int *)(puVar4 + 0x60) = *(int *)(puVar4 + 0x60) + -1;
          UNLOCK();
        }
        local_48 = *(uint *)(lVar5 + 0x44 + lVar3);
        local_44 = *(undefined4 *)(lVar5 + 0x48 + lVar3);
        local_3c = *(undefined4 *)(lVar5 + 0x20 + lVar3);
        local_40 = *(undefined4 *)(lVar5 + 0x10 + lVar3);
        local_38 = *(undefined8 *)(lVar5 + 0x18 + lVar3);
        FUN_1800179cc((longlong)puVar4,iVar2,0,*(uint *)(lVar5 + 0x54 + lVar3),
                      *(uint *)(lVar5 + 0x50 + lVar3),&local_48);
        if (((*(int *)(lVar5 + 0x20 + lVar3) - 1U & 0xfffffff7) == 0) && (puVar4[100] != '\0')) {
          bVar1 = *(byte *)(*(longlong *)(puVar4 + 0x18) + 0x147 + (longlong)iVar2);
          LOCK();
          *(int *)(puVar4 + 0x60) = *(int *)(puVar4 + 0x60) + 1;
          UNLOCK();
          FUN_180017570((longlong)puVar4,iVar2,(uint)bVar1,(undefined8 *)(lVar5 + 0x5c + lVar3),0,
                        0xff);
          LOCK();
          *(int *)(puVar4 + 0x60) = *(int *)(puVar4 + 0x60) + -1;
          UNLOCK();
        }
        FUN_1800173e0((longlong)puVar4,iVar2,*(uint *)(lVar5 + 0x30 + lVar3),
                      *(uint *)(lVar5 + 0x34 + lVar3));
        FUN_1800174f4((longlong)puVar4,iVar2,*(uint *)(lVar5 + 0x2c + lVar3),
                      *(uint *)(lVar5 + 0x28 + lVar3));
        FUN_180017810((longlong)puVar4,iVar2,*(uint *)(lVar5 + 0x24 + lVar3),
                      *(int *)(lVar5 + 0x58 + lVar3));
        FUN_18001745c((longlong)puVar4,iVar2,*(float *)(lVar5 + 0x40 + lVar3));
        *(uint *)(puVar4 + (longlong)iVar2 * 4 + 0xb8) = param_1;
      }
    }
    LOCK();
    *(int *)(puVar4 + 0x60) = *(int *)(puVar4 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

